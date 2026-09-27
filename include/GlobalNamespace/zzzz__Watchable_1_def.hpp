#pragma once
// IWYU pragma private; include "GlobalNamespace/Watchable_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Watchable_1)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class Watchable_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::GlobalNamespace::Watchable_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::Watchable_1, "", "Watchable`1");
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Watchable`1<T>
class CORDL_TYPE Watchable_1 : public ::System::Object {
public:
// Declarations
/// @brief Field _value, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__value, put=__cordl_internal_set__value)) T  _value;

/// @brief Field callbacks, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_callbacks, put=__cordl_internal_set_callbacks)) ::System::Collections::Generic::List_1<::System::Action_1<T>*>*  callbacks;

 __declspec(property(get=get_value, put=set_value)) T  value;

/// @brief Method AddCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void AddCallback(::System::Action_1<T>*  callback, bool  shouldCallbackNow) ;

static inline ::GlobalNamespace::Watchable_1<T>* New_ctor() ;

static inline ::GlobalNamespace::Watchable_1<T>* New_ctor(T  initial) ;

/// @brief Method RemoveCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void RemoveCallback(::System::Action_1<T>*  callback) ;

constexpr T const& __cordl_internal_get__value() const;

constexpr T& __cordl_internal_get__value() ;

constexpr ::System::Collections::Generic::List_1<::System::Action_1<T>*>* const& __cordl_internal_get_callbacks() const;

constexpr ::System::Collections::Generic::List_1<::System::Action_1<T>*>*& __cordl_internal_get_callbacks() ;

constexpr void __cordl_internal_set__value(T  value) ;

constexpr void __cordl_internal_set_callbacks(::System::Collections::Generic::List_1<::System::Action_1<T>*>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(T  initial) ;

/// @brief Method get_value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T get_value() ;

/// @brief Method set_value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_value(T  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Watchable_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Watchable_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Watchable_1(Watchable_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Watchable_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Watchable_1(Watchable_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{948};

/// @brief Field _value, offset: 0x10, size: 0x8, def value: None
 T  ____value;

/// @brief Field callbacks, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Action_1<T>*>*  ___callbacks;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
