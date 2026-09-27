#pragma once
// IWYU pragma private; include "Modio/API/ModioAPIFileParameter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ModioAPIFileParameter)
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Modio::API {
struct ModioAPIFileParameter;
}
// Write type traits
MARK_VAL_T(::Modio::API::ModioAPIFileParameter);
DEFINE_IL2CPP_CLASS(::Modio::API::ModioAPIFileParameter, "Modio.API", "ModioAPIFileParameter");
// Dependencies 
namespace Modio::API {
// Is value type: true
// CS Name: Modio.API.ModioAPIFileParameter
struct CORDL_TYPE ModioAPIFileParameter {
public:
// Declarations
/// @brief Method GetContent, addr 0x9fdd258, size 0x80, virtual false, abstract: false, final false
inline ::System::IO::Stream* GetContent() ;

/// @brief Method .ctor, addr 0x9fdd138, size 0xac, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, ::StringW  contentType, ::StringW  path) ;

/// @brief Method .ctor, addr 0x9fdd1e4, size 0x14, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  stream) ;

/// @brief Method .ctor, addr 0x9fdd1f8, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  stream, ::StringW  name, ::StringW  contentType) ;

/// @brief Method get_None, addr 0x9fdd11c, size 0x1c, virtual false, abstract: false, final false
static inline ::Modio::API::ModioAPIFileParameter get_None() ;

// Ctor Parameters []
// @brief default ctor
constexpr ModioAPIFileParameter() ;

// Ctor Parameters [CppParam { name: "Unused", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "Name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "ContentType", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "MediaType", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Path", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "_stream", ty: "::System::IO::Stream*", modifiers: "", def_value: None, comment: None }]
constexpr ModioAPIFileParameter(bool  Unused, ::StringW  Name, ::StringW  ContentType, ::StringW  MediaType, ::StringW  Path, ::System::IO::Stream*  _stream) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18022};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field Unused, offset: 0x0, size: 0x1, def value: None
 bool  Unused;

/// @brief Field Name, offset: 0x8, size: 0x8, def value: None
 ::StringW  Name;

/// @brief Field ContentType, offset: 0x10, size: 0x8, def value: None
 ::StringW  ContentType;

/// @brief Field MediaType, offset: 0x18, size: 0x8, def value: None
 ::StringW  MediaType;

/// @brief Field Path, offset: 0x20, size: 0x8, def value: None
 ::StringW  Path;

/// @brief Field _stream, offset: 0x28, size: 0x8, def value: None
 ::System::IO::Stream*  _stream;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::ModioAPIFileParameter, Unused) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::ModioAPIFileParameter, Name) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Modio::API::ModioAPIFileParameter, ContentType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::API::ModioAPIFileParameter, MediaType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::API::ModioAPIFileParameter, Path) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::API::ModioAPIFileParameter, _stream) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Modio::API::ModioAPIFileParameter) == 0x30, "Size mismatch!");

} // namespace end def Modio::API
