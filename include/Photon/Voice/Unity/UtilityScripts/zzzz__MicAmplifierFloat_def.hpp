#pragma once
// IWYU pragma private; include "Photon/Voice/Unity/UtilityScripts/MicAmplifierFloat.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MicAmplifierFloat)
namespace Photon::Voice {
template<typename T>
class IProcessor_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Photon::Voice::Unity::UtilityScripts {
class MicAmplifierFloat;
}
// Write type traits
MARK_REF_T(::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat*, "Photon.Voice.Unity.UtilityScripts", "MicAmplifierFloat");
// Dependencies System.Object
namespace Photon::Voice::Unity::UtilityScripts {
// Is value type: false
// CS Name: Photon.Voice.Unity.UtilityScripts.MicAmplifierFloat
class CORDL_TYPE MicAmplifierFloat : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_AmplificationFactor, put=set_AmplificationFactor)) float_t  AmplificationFactor;

 __declspec(property(get=get_BoostValue, put=set_BoostValue)) float_t  BoostValue;

 __declspec(property(get=get_Disabled, put=set_Disabled)) bool  Disabled;

 __declspec(property(get=get_MaxAfter, put=set_MaxAfter)) float_t  MaxAfter;

 __declspec(property(get=get_MaxBefore, put=set_MaxBefore)) float_t  MaxBefore;

/// @brief Field <AmplificationFactor>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__AmplificationFactor_k__BackingField, put=__cordl_internal_set__AmplificationFactor_k__BackingField)) float_t  _AmplificationFactor_k__BackingField;

/// @brief Field <BoostValue>k__BackingField, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__BoostValue_k__BackingField, put=__cordl_internal_set__BoostValue_k__BackingField)) float_t  _BoostValue_k__BackingField;

/// @brief Field <Disabled>k__BackingField, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__Disabled_k__BackingField, put=__cordl_internal_set__Disabled_k__BackingField)) bool  _Disabled_k__BackingField;

/// @brief Field <MaxAfter>k__BackingField, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__MaxAfter_k__BackingField, put=__cordl_internal_set__MaxAfter_k__BackingField)) float_t  _MaxAfter_k__BackingField;

/// @brief Field <MaxBefore>k__BackingField, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__MaxBefore_k__BackingField, put=__cordl_internal_set__MaxBefore_k__BackingField)) float_t  _MaxBefore_k__BackingField;

/// @brief Convert operator to "::Photon::Voice::IProcessor_1<float_t>"
constexpr operator  ::Photon::Voice::IProcessor_1<float_t>*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0xa7893a0, size 0x4, virtual true, abstract: false, final true
inline void Dispose() ;

static inline ::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat* New_ctor(float_t  amplificationFactor, float_t  boostValue) ;

/// @brief Method Process, addr 0xa78931c, size 0x84, virtual true, abstract: false, final true
inline ::ArrayW<float_t> Process(::ArrayW<float_t>  buf) ;

constexpr float_t const& __cordl_internal_get__AmplificationFactor_k__BackingField() const;

constexpr float_t& __cordl_internal_get__AmplificationFactor_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__BoostValue_k__BackingField() const;

constexpr float_t& __cordl_internal_get__BoostValue_k__BackingField() ;

constexpr bool const& __cordl_internal_get__Disabled_k__BackingField() const;

constexpr bool& __cordl_internal_get__Disabled_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__MaxAfter_k__BackingField() const;

constexpr float_t& __cordl_internal_get__MaxAfter_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__MaxBefore_k__BackingField() const;

constexpr float_t& __cordl_internal_get__MaxBefore_k__BackingField() ;

constexpr void __cordl_internal_set__AmplificationFactor_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__BoostValue_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__Disabled_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__MaxAfter_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__MaxBefore_k__BackingField(float_t  value) ;

/// @brief Method .ctor, addr 0xa789260, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(float_t  amplificationFactor, float_t  boostValue) ;

/// [CompilerGenerated]
/// @brief Method get_AmplificationFactor, addr 0xa7892cc, size 0x8, virtual false, abstract: false, final false
inline float_t get_AmplificationFactor() ;

/// [CompilerGenerated]
/// @brief Method get_BoostValue, addr 0xa7892dc, size 0x8, virtual false, abstract: false, final false
inline float_t get_BoostValue() ;

/// [CompilerGenerated]
/// @brief Method get_Disabled, addr 0xa78930c, size 0x8, virtual false, abstract: false, final false
inline bool get_Disabled() ;

/// [CompilerGenerated]
/// @brief Method get_MaxAfter, addr 0xa7892fc, size 0x8, virtual false, abstract: false, final false
inline float_t get_MaxAfter() ;

/// [CompilerGenerated]
/// @brief Method get_MaxBefore, addr 0xa7892ec, size 0x8, virtual false, abstract: false, final false
inline float_t get_MaxBefore() ;

/// @brief Convert to "::Photon::Voice::IProcessor_1<float_t>"
constexpr ::Photon::Voice::IProcessor_1<float_t>* i___Photon__Voice__IProcessor_1_float_t_() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// [CompilerGenerated]
/// @brief Method set_AmplificationFactor, addr 0xa7892d4, size 0x8, virtual false, abstract: false, final false
inline void set_AmplificationFactor(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_BoostValue, addr 0xa7892e4, size 0x8, virtual false, abstract: false, final false
inline void set_BoostValue(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_Disabled, addr 0xa789314, size 0x8, virtual false, abstract: false, final false
inline void set_Disabled(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_MaxAfter, addr 0xa789304, size 0x8, virtual false, abstract: false, final false
inline void set_MaxAfter(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_MaxBefore, addr 0xa7892f4, size 0x8, virtual false, abstract: false, final false
inline void set_MaxBefore(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MicAmplifierFloat() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MicAmplifierFloat", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MicAmplifierFloat(MicAmplifierFloat && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MicAmplifierFloat", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MicAmplifierFloat(MicAmplifierFloat const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28897};

/// [CompilerGenerated]
/// @brief Field <AmplificationFactor>k__BackingField, offset: 0x10, size: 0x4, def value: None
 float_t  ____AmplificationFactor_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <BoostValue>k__BackingField, offset: 0x14, size: 0x4, def value: None
 float_t  ____BoostValue_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <MaxBefore>k__BackingField, offset: 0x18, size: 0x4, def value: None
 float_t  ____MaxBefore_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <MaxAfter>k__BackingField, offset: 0x1c, size: 0x4, def value: None
 float_t  ____MaxAfter_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Disabled>k__BackingField, offset: 0x20, size: 0x1, def value: None
 bool  ____Disabled_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat, ____AmplificationFactor_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat, ____BoostValue_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat, ____MaxBefore_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat, ____MaxAfter_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat, ____Disabled_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat) == 0x28, "Size mismatch!");

} // namespace end def Photon::Voice::Unity::UtilityScripts
