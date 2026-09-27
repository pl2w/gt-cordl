#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Data/TTSDiskCacheSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/TTS/Data/zzzz__TTSDiskCacheLocation_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TTSDiskCacheSettings)
// Forward declare root types
namespace Meta::WitAi::TTS::Data {
class TTSDiskCacheSettings;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*, "Meta.WitAi.TTS.Data", "TTSDiskCacheSettings");
// Dependencies Meta.WitAi.TTS.Data.TTSDiskCacheLocation, System.Object
namespace Meta::WitAi::TTS::Data {
// Is value type: false
// CS Name: Meta.WitAi.TTS.Data.TTSDiskCacheSettings
class CORDL_TYPE TTSDiskCacheSettings : public ::System::Object {
public:
// Declarations
/// @brief Field DiskCacheLocation, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_DiskCacheLocation, put=__cordl_internal_set_DiskCacheLocation)) ::Meta::WitAi::TTS::Data::TTSDiskCacheLocation  DiskCacheLocation;

/// @brief Field StreamBufferLength, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_StreamBufferLength, put=__cordl_internal_set_StreamBufferLength)) float_t  StreamBufferLength;

/// @brief Field StreamFromDisk, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get_StreamFromDisk, put=__cordl_internal_set_StreamFromDisk)) bool  StreamFromDisk;

static inline ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings* New_ctor() ;

constexpr ::Meta::WitAi::TTS::Data::TTSDiskCacheLocation const& __cordl_internal_get_DiskCacheLocation() const;

constexpr ::Meta::WitAi::TTS::Data::TTSDiskCacheLocation& __cordl_internal_get_DiskCacheLocation() ;

constexpr float_t const& __cordl_internal_get_StreamBufferLength() const;

constexpr float_t& __cordl_internal_get_StreamBufferLength() ;

constexpr bool const& __cordl_internal_get_StreamFromDisk() const;

constexpr bool& __cordl_internal_get_StreamFromDisk() ;

constexpr void __cordl_internal_set_DiskCacheLocation(::Meta::WitAi::TTS::Data::TTSDiskCacheLocation  value) ;

constexpr void __cordl_internal_set_StreamBufferLength(float_t  value) ;

constexpr void __cordl_internal_set_StreamFromDisk(bool  value) ;

/// @brief Method .ctor, addr 0x9e68e1c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSDiskCacheSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSDiskCacheSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSDiskCacheSettings(TTSDiskCacheSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSDiskCacheSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSDiskCacheSettings(TTSDiskCacheSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29189};

/// @brief Field DiskCacheLocation, offset: 0x10, size: 0x4, def value: None
 ::Meta::WitAi::TTS::Data::TTSDiskCacheLocation  ___DiskCacheLocation;

/// @brief Field StreamFromDisk, offset: 0x14, size: 0x1, def value: None
 bool  ___StreamFromDisk;

/// @brief Field StreamBufferLength, offset: 0x18, size: 0x4, def value: None
 float_t  ___StreamBufferLength;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::Data::TTSDiskCacheSettings, ___DiskCacheLocation) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Data::TTSDiskCacheSettings, ___StreamFromDisk) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Data::TTSDiskCacheSettings, ___StreamBufferLength) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::Data::TTSDiskCacheSettings) == 0x20, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::Data
