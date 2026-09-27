#pragma once
// IWYU pragma private; include "Modio/Unity/ModioAndroidSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ModioAndroidSettings)
namespace Modio {
class IModioServiceSettings;
}
// Forward declare root types
namespace Modio::Unity {
class ModioAndroidSettings;
}
// Write type traits
MARK_REF_T(::Modio::Unity::ModioAndroidSettings*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::ModioAndroidSettings*, "Modio.Unity", "ModioAndroidSettings");
// Dependencies System.Object
namespace Modio::Unity {
// Is value type: false
// CS Name: Modio.Unity.ModioAndroidSettings
class CORDL_TYPE ModioAndroidSettings : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::Modio::IModioServiceSettings"
constexpr operator  ::Modio::IModioServiceSettings*() noexcept;

static inline ::Modio::Unity::ModioAndroidSettings* New_ctor() ;

/// @brief Method .ctor, addr 0x9f9496c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Modio::IModioServiceSettings"
constexpr ::Modio::IModioServiceSettings* i___Modio__IModioServiceSettings() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioAndroidSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioAndroidSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioAndroidSettings(ModioAndroidSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioAndroidSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioAndroidSettings(ModioAndroidSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32062};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Unity::ModioAndroidSettings) == 0x10, "Size mismatch!");

} // namespace end def Modio::Unity
