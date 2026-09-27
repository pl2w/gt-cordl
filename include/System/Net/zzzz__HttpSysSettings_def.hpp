#pragma once
// IWYU pragma private; include "System/Net/HttpSysSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(HttpSysSettings)
// Forward declare root types
namespace System::Net {
class HttpSysSettings;
}
// Write type traits
MARK_REF_T(::System::Net::HttpSysSettings*);
DEFINE_IL2CPP_CLASS(::System::Net::HttpSysSettings*, "System.Net", "HttpSysSettings");
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.HttpSysSettings
class CORDL_TYPE HttpSysSettings : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr HttpSysSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HttpSysSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HttpSysSettings(HttpSysSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HttpSysSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HttpSysSettings(HttpSysSettings const& ) = delete;

/// @brief Field EnableNonUtf8 offset 0xffffffff size 0x1
static constexpr bool  EnableNonUtf8{true};

/// @brief Field FavorUtf8 offset 0xffffffff size 0x1
static constexpr bool  FavorUtf8{true};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10646};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::HttpSysSettings) == 0x10, "Size mismatch!");

} // namespace end def System::Net
