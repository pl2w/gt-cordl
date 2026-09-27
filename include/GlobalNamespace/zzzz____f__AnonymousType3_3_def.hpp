#pragma once
// IWYU pragma private; include "GlobalNamespace/__f__AnonymousType3_3.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(__f__AnonymousType3_3)
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename <name>j__TPar,typename <forRoom>j__TPar,typename <forTroop>j__TPar>
class __f__AnonymousType3_3;
}
// Write type traits
MARK_GEN_REF_T_PTR(::GlobalNamespace::__f__AnonymousType3_3);
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::__f__AnonymousType3_3, "", "<>f__AnonymousType3`3");
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template<typename <name>j__TPar,typename <forRoom>j__TPar,typename <forTroop>j__TPar>
// Is value type: false
// CS Name: <>f__AnonymousType3`3<<name>j__TPar,<forRoom>j__TPar,<forTroop>j__TPar>
class CORDL_TYPE __f__AnonymousType3_3 : public ::System::Object {
public:
// Declarations
/// @brief Field <forRoom>i__Field, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__forRoom_i__Field, put=__cordl_internal_set__forRoom_i__Field)) <forRoom>j__TPar  _forRoom_i__Field;

/// @brief Field <forTroop>i__Field, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__forTroop_i__Field, put=__cordl_internal_set__forTroop_i__Field)) <forTroop>j__TPar  _forTroop_i__Field;

/// @brief Field <name>i__Field, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__name_i__Field, put=__cordl_internal_set__name_i__Field)) <name>j__TPar  _name_i__Field;

 __declspec(property(get=get_forRoom)) <forRoom>j__TPar  forRoom;

 __declspec(property(get=get_forTroop)) <forTroop>j__TPar  forTroop;

 __declspec(property(get=get_name)) <name>j__TPar  name;

/// [DebuggerHidden]
/// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  value) ;

/// [DebuggerHidden]
/// @brief Method GetHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::__f__AnonymousType3_3<<name>j__TPar,<forRoom>j__TPar,<forTroop>j__TPar>* New_ctor(<name>j__TPar  name, <forRoom>j__TPar  forRoom, <forTroop>j__TPar  forTroop) ;

/// [DebuggerHidden]
/// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr <forRoom>j__TPar const& __cordl_internal_get__forRoom_i__Field() const;

constexpr <forRoom>j__TPar& __cordl_internal_get__forRoom_i__Field() ;

constexpr <forTroop>j__TPar const& __cordl_internal_get__forTroop_i__Field() const;

constexpr <forTroop>j__TPar& __cordl_internal_get__forTroop_i__Field() ;

constexpr <name>j__TPar const& __cordl_internal_get__name_i__Field() const;

constexpr <name>j__TPar& __cordl_internal_get__name_i__Field() ;

constexpr void __cordl_internal_set__forRoom_i__Field(<forRoom>j__TPar  value) ;

constexpr void __cordl_internal_set__forTroop_i__Field(<forTroop>j__TPar  value) ;

constexpr void __cordl_internal_set__name_i__Field(<name>j__TPar  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(<name>j__TPar  name, <forRoom>j__TPar  forRoom, <forTroop>j__TPar  forTroop) ;

/// @brief Method get_forRoom, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline <forRoom>j__TPar get_forRoom() ;

/// @brief Method get_forTroop, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline <forTroop>j__TPar get_forTroop() ;

/// @brief Method get_name, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline <name>j__TPar get_name() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __f__AnonymousType3_3() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__f__AnonymousType3_3", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
__f__AnonymousType3_3(__f__AnonymousType3_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__f__AnonymousType3_3", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
__f__AnonymousType3_3(__f__AnonymousType3_3 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4};

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <name>i__Field, offset: 0x10, size: 0x8, def value: None
 <name>j__TPar  ____name_i__Field;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <forRoom>i__Field, offset: 0x18, size: 0x8, def value: None
 <forRoom>j__TPar  ____forRoom_i__Field;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <forTroop>i__Field, offset: 0x20, size: 0x8, def value: None
 <forTroop>j__TPar  ____forTroop_i__Field;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
