#pragma once
// IWYU pragma private; include "System/Net/UriScheme.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UriScheme)
// Forward declare root types
namespace System::Net {
class UriScheme;
}
// Write type traits
MARK_REF_T(::System::Net::UriScheme*);
DEFINE_IL2CPP_CLASS(::System::Net::UriScheme*, "System.Net", "UriScheme");
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.UriScheme
class CORDL_TYPE UriScheme : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr UriScheme() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UriScheme", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UriScheme(UriScheme && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UriScheme", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UriScheme(UriScheme const& ) = delete;

/// @brief Field File offset 0xffffffff size 0x8
static constexpr ::ConstString  File{u"file"};

/// @brief Field Ftp offset 0xffffffff size 0x8
static constexpr ::ConstString  Ftp{u"ftp"};

/// @brief Field Gopher offset 0xffffffff size 0x8
static constexpr ::ConstString  Gopher{u"gopher"};

/// @brief Field Http offset 0xffffffff size 0x8
static constexpr ::ConstString  Http{u"http"};

/// @brief Field Https offset 0xffffffff size 0x8
static constexpr ::ConstString  Https{u"https"};

/// @brief Field Mailto offset 0xffffffff size 0x8
static constexpr ::ConstString  Mailto{u"mailto"};

/// @brief Field NetPipe offset 0xffffffff size 0x8
static constexpr ::ConstString  NetPipe{u"net.pipe"};

/// @brief Field NetTcp offset 0xffffffff size 0x8
static constexpr ::ConstString  NetTcp{u"net.tcp"};

/// @brief Field News offset 0xffffffff size 0x8
static constexpr ::ConstString  News{u"news"};

/// @brief Field Nntp offset 0xffffffff size 0x8
static constexpr ::ConstString  Nntp{u"nntp"};

/// @brief Field SchemeDelimiter offset 0xffffffff size 0x8
static constexpr ::ConstString  SchemeDelimiter{u"://"};

/// @brief Field Ws offset 0xffffffff size 0x8
static constexpr ::ConstString  Ws{u"ws"};

/// @brief Field Wss offset 0xffffffff size 0x8
static constexpr ::ConstString  Wss{u"wss"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10401};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::UriScheme) == 0x10, "Size mismatch!");

} // namespace end def System::Net
