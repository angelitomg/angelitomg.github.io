JsOsaDAS1.001.00bplist00�Vscript_�// Get TextEdit
TextEdit = Application('TextEdit');

// Get TextEdit documents
documents = TextEdit.documents;

// Get first document
content = documents[0].text();

// Send content to Mail app
Mail = Application('Mail');
message = Mail.OutgoingMessage().make();
message = Mail.OutgoingMessage({
    subject: 'TextEdit Content',
	content: content,
    visible: true
});
Mail.outgoingMessages.push(message);
Mail.activate();                              � jscr  ��ޭ