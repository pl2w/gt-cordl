#pragma once
// IWYU pragma private; include "System/Net/WebRequestMethods.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(WebRequestMethods)
namespace System::Net {
class WebRequestMethods_File;
}
namespace System::Net {
class WebRequestMethods_Ftp;
}
namespace System::Net {
class WebRequestMethods_Http;
}
// Forward declare root types
namespace System::Net {
class WebRequestMethods;
}
namespace System::Net {
class WebRequestMethods_File;
}
namespace System::Net {
class WebRequestMethods_Ftp;
}
namespace System::Net {
class WebRequestMethods_Http;
}
// Write type traits
MARK_REF_T(::System::Net::WebRequestMethods*);
MARK_REF_T(::System::Net::WebRequestMethods_File*);
MARK_REF_T(::System::Net::WebRequestMethods_Ftp*);
MARK_REF_T(::System::Net::WebRequestMethods_Http*);
DEFINE_IL2CPP_CLASS(::System::Net::WebRequestMethods*, "System.Net", "WebRequestMethods");
DEFINE_IL2CPP_CLASS(::System::Net::WebRequestMethods_File*, "System.Net", "WebRequestMethods/File");
DEFINE_IL2CPP_CLASS(::System::Net::WebRequestMethods_Ftp*, "System.Net", "WebRequestMethods/Ftp");
DEFINE_IL2CPP_CLASS(::System::Net::WebRequestMethods_Http*, "System.Net", "WebRequestMethods/Http");
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.WebRequestMethods
class CORDL_TYPE WebRequestMethods : public ::System::Object {
public:
// Declarations
using File = ::System::Net::WebRequestMethods_File;

using Ftp = ::System::Net::WebRequestMethods_Ftp;

using Http = ::System::Net::WebRequestMethods_Http;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebRequestMethods() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebRequestMethods", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebRequestMethods(WebRequestMethods && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebRequestMethods", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebRequestMethods(WebRequestMethods const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10572};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::WebRequestMethods) == 0x10, "Size mismatch!");

} // namespace end def System::Net
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.WebRequestMethods/File
class CORDL_TYPE WebRequestMethods_File : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebRequestMethods_File() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebRequestMethods_File", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebRequestMethods_File(WebRequestMethods_File && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebRequestMethods_File", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebRequestMethods_File(WebRequestMethods_File const& ) = delete;

/// @brief Field DownloadFile offset 0xffffffff size 0x8
static constexpr ::ConstString  DownloadFile{u"GET"};

/// @brief Field UploadFile offset 0xffffffff size 0x8
static constexpr ::ConstString  UploadFile{u"PUT"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10571};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::WebRequestMethods_File) == 0x10, "Size mismatch!");

} // namespace end def System::Net
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.WebRequestMethods/Http
class CORDL_TYPE WebRequestMethods_Http : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebRequestMethods_Http() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebRequestMethods_Http", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebRequestMethods_Http(WebRequestMethods_Http && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebRequestMethods_Http", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebRequestMethods_Http(WebRequestMethods_Http const& ) = delete;

/// @brief Field Connect offset 0xffffffff size 0x8
static constexpr ::ConstString  Connect{u"CONNECT"};

/// @brief Field Get offset 0xffffffff size 0x8
static constexpr ::ConstString  Get{u"GET"};

/// @brief Field Head offset 0xffffffff size 0x8
static constexpr ::ConstString  Head{u"HEAD"};

/// @brief Field MkCol offset 0xffffffff size 0x8
static constexpr ::ConstString  MkCol{u"MKCOL"};

/// @brief Field Post offset 0xffffffff size 0x8
static constexpr ::ConstString  Post{u"POST"};

/// @brief Field Put offset 0xffffffff size 0x8
static constexpr ::ConstString  Put{u"PUT"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10570};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::WebRequestMethods_Http) == 0x10, "Size mismatch!");

} // namespace end def System::Net
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.WebRequestMethods/Ftp
class CORDL_TYPE WebRequestMethods_Ftp : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebRequestMethods_Ftp() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebRequestMethods_Ftp", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebRequestMethods_Ftp(WebRequestMethods_Ftp && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebRequestMethods_Ftp", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebRequestMethods_Ftp(WebRequestMethods_Ftp const& ) = delete;

/// @brief Field AppendFile offset 0xffffffff size 0x8
static constexpr ::ConstString  AppendFile{u"APPE"};

/// @brief Field DeleteFile offset 0xffffffff size 0x8
static constexpr ::ConstString  DeleteFile{u"DELE"};

/// @brief Field DownloadFile offset 0xffffffff size 0x8
static constexpr ::ConstString  DownloadFile{u"RETR"};

/// @brief Field GetDateTimestamp offset 0xffffffff size 0x8
static constexpr ::ConstString  GetDateTimestamp{u"MDTM"};

/// @brief Field GetFileSize offset 0xffffffff size 0x8
static constexpr ::ConstString  GetFileSize{u"SIZE"};

/// @brief Field ListDirectory offset 0xffffffff size 0x8
static constexpr ::ConstString  ListDirectory{u"NLST"};

/// @brief Field ListDirectoryDetails offset 0xffffffff size 0x8
static constexpr ::ConstString  ListDirectoryDetails{u"LIST"};

/// @brief Field MakeDirectory offset 0xffffffff size 0x8
static constexpr ::ConstString  MakeDirectory{u"MKD"};

/// @brief Field PrintWorkingDirectory offset 0xffffffff size 0x8
static constexpr ::ConstString  PrintWorkingDirectory{u"PWD"};

/// @brief Field RemoveDirectory offset 0xffffffff size 0x8
static constexpr ::ConstString  RemoveDirectory{u"RMD"};

/// @brief Field Rename offset 0xffffffff size 0x8
static constexpr ::ConstString  Rename{u"RENAME"};

/// @brief Field UploadFile offset 0xffffffff size 0x8
static constexpr ::ConstString  UploadFile{u"STOR"};

/// @brief Field UploadFileWithUniqueName offset 0xffffffff size 0x8
static constexpr ::ConstString  UploadFileWithUniqueName{u"STOU"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10569};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::WebRequestMethods_Ftp) == 0x10, "Size mismatch!");

} // namespace end def System::Net
