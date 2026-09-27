#pragma once
// IWYU pragma private; include "Modio/FileIO/ModioDiskTestSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ModioDiskTestSettings)
namespace Modio {
class IModioServiceSettings;
}
// Forward declare root types
namespace Modio::FileIO {
class ModioDiskTestSettings;
}
// Write type traits
MARK_REF_T(::Modio::FileIO::ModioDiskTestSettings*);
DEFINE_IL2CPP_CLASS(::Modio::FileIO::ModioDiskTestSettings*, "Modio.FileIO", "ModioDiskTestSettings");
// Dependencies System.Object
namespace Modio::FileIO {
// Is value type: false
// CS Name: Modio.FileIO.ModioDiskTestSettings
class CORDL_TYPE ModioDiskTestSettings : public ::System::Object {
public:
// Declarations
/// @brief Field BytesRemaining, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_BytesRemaining, put=__cordl_internal_set_BytesRemaining)) int32_t  BytesRemaining;

/// @brief Field OverrideDiskSpaceRemaining, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_OverrideDiskSpaceRemaining, put=__cordl_internal_set_OverrideDiskSpaceRemaining)) bool  OverrideDiskSpaceRemaining;

/// @brief Convert operator to "::Modio::IModioServiceSettings"
constexpr operator  ::Modio::IModioServiceSettings*() noexcept;

static inline ::Modio::FileIO::ModioDiskTestSettings* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_BytesRemaining() const;

constexpr int32_t& __cordl_internal_get_BytesRemaining() ;

constexpr bool const& __cordl_internal_get_OverrideDiskSpaceRemaining() const;

constexpr bool& __cordl_internal_get_OverrideDiskSpaceRemaining() ;

constexpr void __cordl_internal_set_BytesRemaining(int32_t  value) ;

constexpr void __cordl_internal_set_OverrideDiskSpaceRemaining(bool  value) ;

/// @brief Method .ctor, addr 0xa054abc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Modio::IModioServiceSettings"
constexpr ::Modio::IModioServiceSettings* i___Modio__IModioServiceSettings() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioDiskTestSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioDiskTestSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioDiskTestSettings(ModioDiskTestSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioDiskTestSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioDiskTestSettings(ModioDiskTestSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17680};

/// @brief Field OverrideDiskSpaceRemaining, offset: 0x10, size: 0x1, def value: None
 bool  ___OverrideDiskSpaceRemaining;

/// @brief Field BytesRemaining, offset: 0x14, size: 0x4, def value: None
 int32_t  ___BytesRemaining;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::FileIO::ModioDiskTestSettings, ___OverrideDiskSpaceRemaining) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::FileIO::ModioDiskTestSettings, ___BytesRemaining) == 0x14, "Offset mismatch!");

static_assert(sizeof(::Modio::FileIO::ModioDiskTestSettings) == 0x18, "Size mismatch!");

} // namespace end def Modio::FileIO
