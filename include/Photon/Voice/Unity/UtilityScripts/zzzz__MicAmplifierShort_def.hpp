#pragma once
// IWYU pragma private; include "Photon/Voice/Unity/UtilityScripts/MicAmplifierShort.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MicAmplifierShort)
namespace Photon::Voice {
template<typename T>
class IProcessor_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Photon::Voice::Unity::UtilityScripts {
class MicAmplifierShort;
}
// Write type traits
MARK_REF_T(::Photon::Voice::Unity::UtilityScripts::MicAmplifierShort*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::Unity::UtilityScripts::MicAmplifierShort*, "Photon.Voice.Unity.UtilityScripts", "MicAmplifierShort");
// Dependencies System.Object
namespace Photon::Voice::Unity::UtilityScripts {
// Is value type: false
// CS Name: Photon.Voice.Unity.UtilityScripts.MicAmplifierShort
class CORDL_TYPE MicAmplifierShort : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_AmplificationFactor, put=set_AmplificationFactor)) int16_t  AmplificationFactor;

 __declspec(property(get=get_BoostValue, put=set_BoostValue)) int16_t  BoostValue;

 __declspec(property(get=get_Disabled, put=set_Disabled)) bool  Disabled;

 __declspec(property(get=get_MaxAfter, put=set_MaxAfter)) int16_t  MaxAfter;

 __declspec(property(get=get_MaxBefore, put=set_MaxBefore)) int16_t  MaxBefore;

/// @brief Field <AmplificationFactor>k__BackingField, offset 0x10, size 0x2 
 __declspec(property(get=__cordl_internal_get__AmplificationFactor_k__BackingField, put=__cordl_internal_set__AmplificationFactor_k__BackingField)) int16_t  _AmplificationFactor_k__BackingField;

/// @brief Field <BoostValue>k__BackingField, offset 0x12, size 0x2 
 __declspec(property(get=__cordl_internal_get__BoostValue_k__BackingField, put=__cordl_internal_set__BoostValue_k__BackingField)) int16_t  _BoostValue_k__BackingField;

/// @brief Field <Disabled>k__BackingField, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__Disabled_k__BackingField, put=__cordl_internal_set__Disabled_k__BackingField)) bool  _Disabled_k__BackingField;

/// @brief Field <MaxAfter>k__BackingField, offset 0x16, size 0x2 
 __declspec(property(get=__cordl_internal_get__MaxAfter_k__BackingField, put=__cordl_internal_set__MaxAfter_k__BackingField)) int16_t  _MaxAfter_k__BackingField;

/// @brief Field <MaxBefore>k__BackingField, offset 0x14, size 0x2 
 __declspec(property(get=__cordl_internal_get__MaxBefore_k__BackingField, put=__cordl_internal_set__MaxBefore_k__BackingField)) int16_t  _MaxBefore_k__BackingField;

/// @brief Convert operator to "::Photon::Voice::IProcessor_1<int16_t>"
constexpr operator  ::Photon::Voice::IProcessor_1<int16_t>*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0xa789478, size 0x4, virtual true, abstract: false, final true
inline void Dispose() ;

static inline ::Photon::Voice::Unity::UtilityScripts::MicAmplifierShort* New_ctor(int16_t  amplificationFactor, int16_t  boostValue) ;

/// @brief Method Process, addr 0xa7893f4, size 0x84, virtual true, abstract: false, final true
inline ::ArrayW<int16_t> Process(::ArrayW<int16_t>  buf) ;

constexpr int16_t const& __cordl_internal_get__AmplificationFactor_k__BackingField() const;

constexpr int16_t& __cordl_internal_get__AmplificationFactor_k__BackingField() ;

constexpr int16_t const& __cordl_internal_get__BoostValue_k__BackingField() const;

constexpr int16_t& __cordl_internal_get__BoostValue_k__BackingField() ;

constexpr bool const& __cordl_internal_get__Disabled_k__BackingField() const;

constexpr bool& __cordl_internal_get__Disabled_k__BackingField() ;

constexpr int16_t const& __cordl_internal_get__MaxAfter_k__BackingField() const;

constexpr int16_t& __cordl_internal_get__MaxAfter_k__BackingField() ;

constexpr int16_t const& __cordl_internal_get__MaxBefore_k__BackingField() const;

constexpr int16_t& __cordl_internal_get__MaxBefore_k__BackingField() ;

constexpr void __cordl_internal_set__AmplificationFactor_k__BackingField(int16_t  value) ;

constexpr void __cordl_internal_set__BoostValue_k__BackingField(int16_t  value) ;

constexpr void __cordl_internal_set__Disabled_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__MaxAfter_k__BackingField(int16_t  value) ;

constexpr void __cordl_internal_set__MaxBefore_k__BackingField(int16_t  value) ;

/// @brief Method .ctor, addr 0xa78928c, size 0x30, virtual false, abstract: false, final false
inline void _ctor(int16_t  amplificationFactor, int16_t  boostValue) ;

/// [CompilerGenerated]
/// @brief Method get_AmplificationFactor, addr 0xa7893a4, size 0x8, virtual false, abstract: false, final false
inline int16_t get_AmplificationFactor() ;

/// [CompilerGenerated]
/// @brief Method get_BoostValue, addr 0xa7893b4, size 0x8, virtual false, abstract: false, final false
inline int16_t get_BoostValue() ;

/// [CompilerGenerated]
/// @brief Method get_Disabled, addr 0xa7893e4, size 0x8, virtual false, abstract: false, final false
inline bool get_Disabled() ;

/// [CompilerGenerated]
/// @brief Method get_MaxAfter, addr 0xa7893d4, size 0x8, virtual false, abstract: false, final false
inline int16_t get_MaxAfter() ;

/// [CompilerGenerated]
/// @brief Method get_MaxBefore, addr 0xa7893c4, size 0x8, virtual false, abstract: false, final false
inline int16_t get_MaxBefore() ;

/// @brief Convert to "::Photon::Voice::IProcessor_1<int16_t>"
constexpr ::Photon::Voice::IProcessor_1<int16_t>* i___Photon__Voice__IProcessor_1_int16_t_() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// [CompilerGenerated]
/// @brief Method set_AmplificationFactor, addr 0xa7893ac, size 0x8, virtual false, abstract: false, final false
inline void set_AmplificationFactor(int16_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_BoostValue, addr 0xa7893bc, size 0x8, virtual false, abstract: false, final false
inline void set_BoostValue(int16_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_Disabled, addr 0xa7893ec, size 0x8, virtual false, abstract: false, final false
inline void set_Disabled(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_MaxAfter, addr 0xa7893dc, size 0x8, virtual false, abstract: false, final false
inline void set_MaxAfter(int16_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_MaxBefore, addr 0xa7893cc, size 0x8, virtual false, abstract: false, final false
inline void set_MaxBefore(int16_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MicAmplifierShort() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MicAmplifierShort", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MicAmplifierShort(MicAmplifierShort && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MicAmplifierShort", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MicAmplifierShort(MicAmplifierShort const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28898};

/// [CompilerGenerated]
/// @brief Field <AmplificationFactor>k__BackingField, offset: 0x10, size: 0x2, def value: None
 int16_t  ____AmplificationFactor_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <BoostValue>k__BackingField, offset: 0x12, size: 0x2, def value: None
 int16_t  ____BoostValue_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <MaxBefore>k__BackingField, offset: 0x14, size: 0x2, def value: None
 int16_t  ____MaxBefore_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <MaxAfter>k__BackingField, offset: 0x16, size: 0x2, def value: None
 int16_t  ____MaxAfter_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Disabled>k__BackingField, offset: 0x18, size: 0x1, def value: None
 bool  ____Disabled_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::Unity::UtilityScripts::MicAmplifierShort, ____AmplificationFactor_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::UtilityScripts::MicAmplifierShort, ____BoostValue_k__BackingField) == 0x12, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::UtilityScripts::MicAmplifierShort, ____MaxBefore_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::UtilityScripts::MicAmplifierShort, ____MaxAfter_k__BackingField) == 0x16, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::UtilityScripts::MicAmplifierShort, ____Disabled_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::Unity::UtilityScripts::MicAmplifierShort) == 0x20, "Size mismatch!");

} // namespace end def Photon::Voice::Unity::UtilityScripts
