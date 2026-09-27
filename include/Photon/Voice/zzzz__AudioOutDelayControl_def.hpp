#pragma once
// IWYU pragma private; include "Photon/Voice/AudioOutDelayControl.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AudioOutDelayControl)
namespace Photon::Voice {
class AudioOutDelayControl_PlayDelayConfig;
}
// Forward declare root types
namespace Photon::Voice {
class AudioOutDelayControl;
}
namespace Photon::Voice {
class AudioOutDelayControl_PlayDelayConfig;
}
// Write type traits
MARK_REF_T(::Photon::Voice::AudioOutDelayControl*);
MARK_REF_T(::Photon::Voice::AudioOutDelayControl_PlayDelayConfig*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::AudioOutDelayControl*, "Photon.Voice", "AudioOutDelayControl");
DEFINE_IL2CPP_CLASS(::Photon::Voice::AudioOutDelayControl_PlayDelayConfig*, "Photon.Voice", "AudioOutDelayControl/PlayDelayConfig");
// Dependencies System.Object
namespace Photon::Voice {
// Is value type: false
// CS Name: Photon.Voice.AudioOutDelayControl
class CORDL_TYPE AudioOutDelayControl : public ::System::Object {
public:
// Declarations
using PlayDelayConfig = ::Photon::Voice::AudioOutDelayControl_PlayDelayConfig;

static inline ::Photon::Voice::AudioOutDelayControl* New_ctor() ;

/// @brief Method .ctor, addr 0xa74596c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioOutDelayControl() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioOutDelayControl", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioOutDelayControl(AudioOutDelayControl && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioOutDelayControl", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioOutDelayControl(AudioOutDelayControl const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28398};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Photon::Voice::AudioOutDelayControl) == 0x10, "Size mismatch!");

} // namespace end def Photon::Voice
// Dependencies System.Object
namespace Photon::Voice {
// Is value type: false
// CS Name: Photon.Voice.AudioOutDelayControl/PlayDelayConfig
class CORDL_TYPE AudioOutDelayControl_PlayDelayConfig : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_High, put=set_High)) int32_t  High;

 __declspec(property(get=get_Low, put=set_Low)) int32_t  Low;

 __declspec(property(get=get_Max, put=set_Max)) int32_t  Max;

 __declspec(property(get=get_SpeedUpPerc, put=set_SpeedUpPerc)) int32_t  SpeedUpPerc;

/// @brief Field <High>k__BackingField, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__High_k__BackingField, put=__cordl_internal_set__High_k__BackingField)) int32_t  _High_k__BackingField;

/// @brief Field <Low>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__Low_k__BackingField, put=__cordl_internal_set__Low_k__BackingField)) int32_t  _Low_k__BackingField;

/// @brief Field <Max>k__BackingField, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__Max_k__BackingField, put=__cordl_internal_set__Max_k__BackingField)) int32_t  _Max_k__BackingField;

/// @brief Field <SpeedUpPerc>k__BackingField, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__SpeedUpPerc_k__BackingField, put=__cordl_internal_set__SpeedUpPerc_k__BackingField)) int32_t  _SpeedUpPerc_k__BackingField;

/// @brief Method Clone, addr 0xa7459d8, size 0x6c, virtual false, abstract: false, final false
inline ::Photon::Voice::AudioOutDelayControl_PlayDelayConfig* Clone() ;

static inline ::Photon::Voice::AudioOutDelayControl_PlayDelayConfig* New_ctor() ;

constexpr int32_t const& __cordl_internal_get__High_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__High_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__Low_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Low_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__Max_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Max_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__SpeedUpPerc_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__SpeedUpPerc_k__BackingField() ;

constexpr void __cordl_internal_set__High_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__Low_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__Max_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__SpeedUpPerc_k__BackingField(int32_t  value) ;

/// @brief Method .ctor, addr 0xa745974, size 0x24, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_High, addr 0xa7459a8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_High() ;

/// [CompilerGenerated]
/// @brief Method get_Low, addr 0xa745998, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Low() ;

/// [CompilerGenerated]
/// @brief Method get_Max, addr 0xa7459b8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Max() ;

/// [CompilerGenerated]
/// @brief Method get_SpeedUpPerc, addr 0xa7459c8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_SpeedUpPerc() ;

/// [CompilerGenerated]
/// @brief Method set_High, addr 0xa7459b0, size 0x8, virtual false, abstract: false, final false
inline void set_High(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_Low, addr 0xa7459a0, size 0x8, virtual false, abstract: false, final false
inline void set_Low(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_Max, addr 0xa7459c0, size 0x8, virtual false, abstract: false, final false
inline void set_Max(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_SpeedUpPerc, addr 0xa7459d0, size 0x8, virtual false, abstract: false, final false
inline void set_SpeedUpPerc(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioOutDelayControl_PlayDelayConfig() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioOutDelayControl_PlayDelayConfig", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioOutDelayControl_PlayDelayConfig(AudioOutDelayControl_PlayDelayConfig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioOutDelayControl_PlayDelayConfig", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioOutDelayControl_PlayDelayConfig(AudioOutDelayControl_PlayDelayConfig const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28397};

/// [CompilerGenerated]
/// @brief Field <Low>k__BackingField, offset: 0x10, size: 0x4, def value: None
 int32_t  ____Low_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <High>k__BackingField, offset: 0x14, size: 0x4, def value: None
 int32_t  ____High_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Max>k__BackingField, offset: 0x18, size: 0x4, def value: None
 int32_t  ____Max_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <SpeedUpPerc>k__BackingField, offset: 0x1c, size: 0x4, def value: None
 int32_t  ____SpeedUpPerc_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::AudioOutDelayControl_PlayDelayConfig, ____Low_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::AudioOutDelayControl_PlayDelayConfig, ____High_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::AudioOutDelayControl_PlayDelayConfig, ____Max_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::AudioOutDelayControl_PlayDelayConfig, ____SpeedUpPerc_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::AudioOutDelayControl_PlayDelayConfig) == 0x20, "Size mismatch!");

} // namespace end def Photon::Voice
