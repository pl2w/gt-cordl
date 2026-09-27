#pragma once
// IWYU pragma private; include "GlobalNamespace/__f__AnonymousType5_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(__f__AnonymousType5_1)
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename <MapIds>j__TPar>
class __f__AnonymousType5_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::GlobalNamespace::__f__AnonymousType5_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::__f__AnonymousType5_1, "", "<>f__AnonymousType5`1");
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template<typename <MapIds>j__TPar>
// Is value type: false
// CS Name: <>f__AnonymousType5`1<<MapIds>j__TPar>
class CORDL_TYPE __f__AnonymousType5_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_MapIds)) <MapIds>j__TPar  MapIds;

/// @brief Field <MapIds>i__Field, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__MapIds_i__Field, put=__cordl_internal_set__MapIds_i__Field)) <MapIds>j__TPar  _MapIds_i__Field;

/// [DebuggerHidden]
/// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  value) ;

/// [DebuggerHidden]
/// @brief Method GetHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::__f__AnonymousType5_1<<MapIds>j__TPar>* New_ctor(<MapIds>j__TPar  MapIds) ;

/// [DebuggerHidden]
/// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr <MapIds>j__TPar const& __cordl_internal_get__MapIds_i__Field() const;

constexpr <MapIds>j__TPar& __cordl_internal_get__MapIds_i__Field() ;

constexpr void __cordl_internal_set__MapIds_i__Field(<MapIds>j__TPar  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(<MapIds>j__TPar  MapIds) ;

/// @brief Method get_MapIds, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline <MapIds>j__TPar get_MapIds() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __f__AnonymousType5_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__f__AnonymousType5_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
__f__AnonymousType5_1(__f__AnonymousType5_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__f__AnonymousType5_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
__f__AnonymousType5_1(__f__AnonymousType5_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6};

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <MapIds>i__Field, offset: 0x10, size: 0x8, def value: None
 <MapIds>j__TPar  ____MapIds_i__Field;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
