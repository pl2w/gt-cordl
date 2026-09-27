#pragma once
// IWYU pragma private; include "GlobalNamespace/__f__AnonymousType0_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(__f__AnonymousType0_2)
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename <HandFinger>j__TPar,typename <FingerFeatures>j__TPar>
class __f__AnonymousType0_2;
}
// Write type traits
MARK_GEN_REF_T_PTR(::GlobalNamespace::__f__AnonymousType0_2);
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::__f__AnonymousType0_2, "", "<>f__AnonymousType0`2");
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template<typename <HandFinger>j__TPar,typename <FingerFeatures>j__TPar>
// Is value type: false
// CS Name: <>f__AnonymousType0`2<<HandFinger>j__TPar,<FingerFeatures>j__TPar>
class CORDL_TYPE __f__AnonymousType0_2 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_FingerFeatures)) <FingerFeatures>j__TPar  FingerFeatures;

 __declspec(property(get=get_HandFinger)) <HandFinger>j__TPar  HandFinger;

/// @brief Field <FingerFeatures>i__Field, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__FingerFeatures_i__Field, put=__cordl_internal_set__FingerFeatures_i__Field)) <FingerFeatures>j__TPar  _FingerFeatures_i__Field;

/// @brief Field <HandFinger>i__Field, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__HandFinger_i__Field, put=__cordl_internal_set__HandFinger_i__Field)) <HandFinger>j__TPar  _HandFinger_i__Field;

/// [DebuggerHidden]
/// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  value) ;

/// [DebuggerHidden]
/// @brief Method GetHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::__f__AnonymousType0_2<<HandFinger>j__TPar,<FingerFeatures>j__TPar>* New_ctor(<HandFinger>j__TPar  HandFinger, <FingerFeatures>j__TPar  FingerFeatures) ;

/// [DebuggerHidden]
/// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr <FingerFeatures>j__TPar const& __cordl_internal_get__FingerFeatures_i__Field() const;

constexpr <FingerFeatures>j__TPar& __cordl_internal_get__FingerFeatures_i__Field() ;

constexpr <HandFinger>j__TPar const& __cordl_internal_get__HandFinger_i__Field() const;

constexpr <HandFinger>j__TPar& __cordl_internal_get__HandFinger_i__Field() ;

constexpr void __cordl_internal_set__FingerFeatures_i__Field(<FingerFeatures>j__TPar  value) ;

constexpr void __cordl_internal_set__HandFinger_i__Field(<HandFinger>j__TPar  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(<HandFinger>j__TPar  HandFinger, <FingerFeatures>j__TPar  FingerFeatures) ;

/// @brief Method get_FingerFeatures, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline <FingerFeatures>j__TPar get_FingerFeatures() ;

/// @brief Method get_HandFinger, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline <HandFinger>j__TPar get_HandFinger() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __f__AnonymousType0_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__f__AnonymousType0_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
__f__AnonymousType0_2(__f__AnonymousType0_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__f__AnonymousType0_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
__f__AnonymousType0_2(__f__AnonymousType0_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15677};

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <HandFinger>i__Field, offset: 0x10, size: 0x8, def value: None
 <HandFinger>j__TPar  ____HandFinger_i__Field;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <FingerFeatures>i__Field, offset: 0x18, size: 0x8, def value: None
 <FingerFeatures>j__TPar  ____FingerFeatures_i__Field;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
