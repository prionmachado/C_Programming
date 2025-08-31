#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure for Doctor information
typedef struct {
    int doctor_id;
    char name[50];
    char specialization[50];
    int available_slots;
} Doctor;

// Structure for Patient information
typedef struct {
    int patient_id;
    char name[50];
    int age;
    char medical_history[200];
    char date_of_arrival[11];
    char date_of_release[11];
    int doctor_id;
} Patient;

// Function to clear input buffer
void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
        // Clearing the buffer
    }
}

// Function to add doctor information
void addDoctor() {
    Doctor doctor;
    FILE *fp = fopen("doctors.txt", "a");

    if (fp == NULL) {
        printf("Error opening file.\n");
        return;
    }

    printf("Enter Doctor ID: ");
    scanf("%d", &doctor.doctor_id);
    clearInputBuffer();  // Clear buffer after integer input
    printf("Enter Doctor Name: ");
    fgets(doctor.name, sizeof(doctor.name), stdin);
    doctor.name[strcspn(doctor.name, "\n")] = 0; // Remove newline character
    printf("Enter Specialization: ");
    fgets(doctor.specialization, sizeof(doctor.specialization), stdin);
    doctor.specialization[strcspn(doctor.specialization, "\n")] = 0; // Remove newline character
    printf("Enter Available Slots: ");
    scanf("%d", &doctor.available_slots);
    clearInputBuffer();  // Clear buffer after integer input

    fprintf(fp, "%d\n%s\n%s\n%d\n", doctor.doctor_id, doctor.name, doctor.specialization, doctor.available_slots);
    fclose(fp);

    printf("Doctor added successfully!\n");
}

// Function to add patient information
void addPatient() {
    Patient patient;
    FILE *fp = fopen("patients.txt", "a");

    if (fp == NULL) {
        printf("Error opening file.\n");
        return;
    }

    printf("Enter Patient ID: ");
    scanf("%d", &patient.patient_id);
    clearInputBuffer();  // Clear buffer after integer input
    printf("Enter Patient Name: ");
    fgets(patient.name, sizeof(patient.name), stdin);
    patient.name[strcspn(patient.name, "\n")] = 0; // Remove newline character
    printf("Enter Age: ");
    scanf("%d", &patient.age);
    clearInputBuffer();  // Clear buffer after integer input
    printf("Enter Medical History: ");
    fgets(patient.medical_history, sizeof(patient.medical_history), stdin);
    patient.medical_history[strcspn(patient.medical_history, "\n")] = 0; // Remove newline character
    printf("Enter Date of Arrival (dd-mm-yyyy): ");
    fgets(patient.date_of_arrival, sizeof(patient.date_of_arrival), stdin);
    patient.date_of_arrival[strcspn(patient.date_of_arrival, "\n")] = 0; // Remove newline character
    printf("Enter Date of Release (dd-mm-yyyy or 'NA' if not released): ");
    fgets(patient.date_of_release, sizeof(patient.date_of_release), stdin);
    patient.date_of_release[strcspn(patient.date_of_release, "\n")] = 0; // Remove newline character
    printf("Enter Doctor ID: ");
    scanf("%d", &patient.doctor_id);
    clearInputBuffer();  // Clear buffer after integer input

    fprintf(fp, "%d\n%s\n%d\n%s\n%s\n%s\n%d\n", patient.patient_id, patient.name, patient.age, patient.medical_history, patient.date_of_arrival, patient.date_of_release, patient.doctor_id);
    fclose(fp);

    printf("Patient added successfully!\n");
}

// Function to update doctor details
void updateDoctor() {
    Doctor doctor;
    FILE *fp = fopen("doctors.txt", "r");
    FILE *temp_fp = fopen("temp_doctors.txt", "w");

    if (fp == NULL || temp_fp == NULL) {
        printf("Error opening file.\n");
        return;
    }

    int doctor_id, found = 0;
    printf("Enter Doctor ID to update: ");
    scanf("%d", &doctor_id);
    clearInputBuffer();  // Clear buffer after integer input

    while (fscanf(fp, "%d\n%[^\n]\n%[^\n]\n%d", &doctor.doctor_id, doctor.name, doctor.specialization, &doctor.available_slots) != EOF) {
        if (doctor.doctor_id == doctor_id) {
            printf("Enter new Doctor Name: ");
            fgets(doctor.name, sizeof(doctor.name), stdin);
            doctor.name[strcspn(doctor.name, "\n")] = 0; // Remove newline character
            printf("Enter new Specialization: ");
            fgets(doctor.specialization, sizeof(doctor.specialization), stdin);
            doctor.specialization[strcspn(doctor.specialization, "\n")] = 0; // Remove newline character
            printf("Enter new Available Slots: ");
            scanf("%d", &doctor.available_slots);
            clearInputBuffer();  // Clear buffer after integer input
            found = 1;
        }
        fprintf(temp_fp, "%d\n%s\n%s\n%d\n", doctor.doctor_id, doctor.name, doctor.specialization, doctor.available_slots);
    }

    fclose(fp);
    fclose(temp_fp);

    if (found) {
        remove("doctors.txt");
        rename("temp_doctors.txt", "doctors.txt");
        printf("Doctor details updated successfully!\n");
    } else {
        remove("temp_doctors.txt");
        printf("Doctor with ID %d not found.\n", doctor_id);
    }
}

// Function to update patient details
void updatePatient() {
    Patient patient;
    FILE *fp = fopen("patients.txt", "r");
    FILE *temp_fp = fopen("temp_patients.txt", "w");

    if (fp == NULL || temp_fp == NULL) {
        printf("Error opening file.\n");
        return;
    }

    int patient_id, found = 0;
    printf("Enter Patient ID to update: ");
    scanf("%d", &patient_id);
    clearInputBuffer();  // Clear buffer after integer input

    while (fscanf(fp, "%d\n%[^\n]\n%d\n%[^\n]\n%[^\n]\n%[^\n]\n%d", &patient.patient_id, patient.name, &patient.age, patient.medical_history, patient.date_of_arrival, patient.date_of_release, &patient.doctor_id) != EOF) {
        if (patient.patient_id == patient_id) {
            printf("Enter new Patient Name: ");
            fgets(patient.name, sizeof(patient.name), stdin);
            patient.name[strcspn(patient.name, "\n")] = 0; // Remove newline character
            printf("Enter new Age: ");
            scanf("%d", &patient.age);
            clearInputBuffer();  // Clear buffer after integer input
            printf("Enter new Medical History: ");
            fgets(patient.medical_history, sizeof(patient.medical_history), stdin);
            patient.medical_history[strcspn(patient.medical_history, "\n")] = 0; // Remove newline character
            printf("Enter new Date of Arrival (dd-mm-yyyy): ");
            fgets(patient.date_of_arrival, sizeof(patient.date_of_arrival), stdin);
            patient.date_of_arrival[strcspn(patient.date_of_arrival, "\n")] = 0; // Remove newline character
            printf("Enter new Date of Release (dd-mm-yyyy or 'NA' if not released): ");
            fgets(patient.date_of_release, sizeof(patient.date_of_release), stdin);
            patient.date_of_release[strcspn(patient.date_of_release, "\n")] = 0; // Remove newline character
            printf("Enter new Doctor ID: ");
            scanf("%d", &patient.doctor_id);
            clearInputBuffer();  // Clear buffer after integer input
            found = 1;
        }
        fprintf(temp_fp, "%d\n%s\n%d\n%s\n%s\n%s\n%d\n", patient.patient_id, patient.name, patient.age, patient.medical_history, patient.date_of_arrival, patient.date_of_release, patient.doctor_id);
    }

    fclose(fp);
    fclose(temp_fp);

    if (found) {
        remove("patients.txt");
        rename("temp_patients.txt", "patients.txt");
        printf("Patient details updated successfully!\n");
    } else {
        remove("temp_patients.txt");
        printf("Patient with ID %d not found.\n", patient_id);
    }
}

// Function to delete patient details
void deletePatient() {
    Patient patient;
    FILE *fp = fopen("patients.txt", "r");
    FILE *temp_fp = fopen("temp_patients.txt", "w");

    if (fp == NULL || temp_fp == NULL) {
        printf("Error opening file.\n");
        return;
    }

    int patient_id, found = 0;
    printf("Enter Patient ID to delete: ");
    scanf("%d", &patient_id);
    clearInputBuffer();  // Clear buffer after integer input

    while (fscanf(fp, "%d\n%[^\n]\n%d\n%[^\n]\n%[^\n]\n%[^\n]\n%d", &patient.patient_id, patient.name, &patient.age, patient.medical_history, patient.date_of_arrival, patient.date_of_release, &patient.doctor_id) != EOF) {
        if (patient.patient_id == patient_id) {
            found = 1;
            continue;  // Skip this record
        }
        fprintf(temp_fp, "%d\n%s\n%d\n%s\n%s\n%s\n%d\n", patient.patient_id, patient.name, patient.age, patient.medical_history, patient.date_of_arrival, patient.date_of_release, patient.doctor_id);
    }

    fclose(fp);
    fclose(temp_fp);

    if (found) {
        remove("patients.txt");
        rename("temp_patients.txt", "patients.txt");
        printf("Patient details deleted successfully!\n");
    } else {
        remove("temp_patients.txt");
        printf("Patient with ID %d not found.\n", patient_id);
    }
}

// Function to delete doctor details
void deleteDoctor() {
    Doctor doctor;
    FILE *fp = fopen("doctors.txt", "r");
    FILE *temp_fp = fopen("temp_doctors.txt", "w");

    if (fp == NULL || temp_fp == NULL) {
        printf("Error opening file.\n");
        return;
    }

    int doctor_id, found = 0;
    printf("Enter Doctor ID to delete: ");
    scanf("%d", &doctor_id);
    clearInputBuffer();  // Clear buffer after integer input

    while (fscanf(fp, "%d\n%[^\n]\n%[^\n]\n%d", &doctor.doctor_id, doctor.name, doctor.specialization, &doctor.available_slots) != EOF) {
        if (doctor.doctor_id == doctor_id) {
            found = 1;
            continue;  // Skip this record
        }
        fprintf(temp_fp, "%d\n%s\n%s\n%d\n", doctor.doctor_id, doctor.name, doctor.specialization, doctor.available_slots);
    }

    fclose(fp);
    fclose(temp_fp);

    if (found) {
        remove("doctors.txt");
        rename("temp_doctors.txt", "doctors.txt");
        printf("Doctor details deleted successfully!\n");
    } else {
        remove("temp_doctors.txt");
        printf("Doctor with ID %d not found.\n", doctor_id);
    }
}

// Function to view all doctors
void viewDoctors() {
    Doctor doctor;
    FILE *fp = fopen("doctors.txt", "r");

    if (fp == NULL) {
        printf("Error opening file.\n");
        return;
    }

    printf("\nList of Doctors:\n");
    printf("ID\tName\tSpecialization\tAvailable Slots\n");
    while (fscanf(fp, "%d\n%[^\n]\n%[^\n]\n%d", &doctor.doctor_id, doctor.name, doctor.specialization, &doctor.available_slots) != EOF) {
        printf("%d\t%s\t%s\t%d\n", doctor.doctor_id, doctor.name, doctor.specialization, doctor.available_slots);
    }

    fclose(fp);
}

// Function to view all patients
void viewPatients() {
    Patient patient;
    FILE *fp = fopen("patients.txt", "r");

    if (fp == NULL) {
        printf("Error opening file.\n");
        return;
    }

    printf("\nList of Patients:\n");
    printf("ID\tName\tAge\tMedical History\tDate of Arrival\tDate of Release\tDoctor ID\n");
    while (fscanf(fp, "%d\n%[^\n]\n%d\n%[^\n]\n%[^\n]\n%[^\n]\n%d", &patient.patient_id, patient.name, &patient.age, patient.medical_history, patient.date_of_arrival, patient.date_of_release, &patient.doctor_id) != EOF) {
        printf("%d\t%s\t%d\t%s\t%s\t%s\t%d\n", patient.patient_id, patient.name, patient.age, patient.medical_history, patient.date_of_arrival, patient.date_of_release, patient.doctor_id);
    }

    fclose(fp);
}

// Main menu function
void menu() {
    int choice;
    do {
        printf("\nHospital Management System\n");
        printf("1. Add Doctor\n");
        printf("2. Add Patient\n");
        printf("3. Update Doctor Details\n");
        printf("4. Update Patient Details\n");
        printf("5. Delete Doctor Details\n");
        printf("6. Delete Patient Details\n");
        printf("7. View All Doctors\n");
        printf("8. View All Patients\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        clearInputBuffer();  // Clear buffer after integer input

        switch (choice) {
            case 1:
                addDoctor();
                break;
            case 2:
                addPatient();
                break;
            case 3:
                updateDoctor();
                break;
            case 4:
                updatePatient();
                break;
            case 5:
                deleteDoctor();
                break;
            case 6:
                deletePatient();
                break;
            case 7:
                viewDoctors();
                break;
            case 8:
                viewPatients();
                break;
            case 9:
                printf("Exiting system...\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 9);
}

int main() {
    menu();
    return 0;
} 