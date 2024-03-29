#ifndef EMAIL_SENDER_H
#define EMAIL_SENDER_H

// Gmail SMTP server details for secure submission (port 587)
#define SMTP_SERVER "smtp://smtp.gmail.com:587"
#define USERNAME "sender email" 
#define PASSWORD "sender password" 

// Email details
#define TO_ADDRESS "receipients email"
#define SUBJECT "Visibility Alert"
#define BODY_BAD "Subject: Visibility Alert\r\n\r\nVisibility is bad. Please stay indoors and avoid driving any vehicle.\0"


struct EmailBodyInfo {
    const char *data;
    size_t size;
};

size_t read_callback(void *ptr, size_t size, size_t nmemb, void *userdata);

int send_email();

#endif /* EMAIL_SENDER_H */
