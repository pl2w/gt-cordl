#pragma once
// IWYU pragma private; include "GlobalNamespace/WatchableGenericSO_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EnterPlayID_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(WatchableGenericSO_1)
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
class WatchableGenericSO_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::GlobalNamespace::WatchableGenericSO_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::WatchableGenericSO_1, "", "WatchableGenericSO`1");
// Dependencies EnterPlayID, UnityEngine.ScriptableObject
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: false
// CS Name: WatchableGenericSO`1<T>
class CORDL_TYPE WatchableGenericSO_1 : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field InitialValue, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_InitialValue, put=__cordl_internal_set_InitialValue)) T  InitialValue;

 __declspec(property(get=get_Value, put=set_Value)) T  Value;

/// @brief Field <_value>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___value_k__BackingField, put=__cordl_internal_set___value_k__BackingField)) T  __value_k__BackingField;

 __declspec(property(get=get__value, put=set__value)) T  _value;

/// @brief Field callbacks, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_callbacks, put=__cordl_internal_set_callbacks)) ::System::Collections::Generic::List_1<::System::Action_1<T>*>*  callbacks;

/// @brief Field enterPlayID, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_enterPlayID, put=__cordl_internal_set_enterPlayID)) ::GlobalNamespace::EnterPlayID  enterPlayID;

/// @brief Method AddCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void AddCallback(::System::Action_1<T>*  callback, bool  shouldCallbackNow) ;

/// @brief Method EnsureInitialized, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void EnsureInitialized() ;

static inline ::GlobalNamespace::WatchableGenericSO_1<T>* New_ctor() ;

/// @brief Method RemoveCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void RemoveCallback(::System::Action_1<T>*  callback) ;

constexpr T const& __cordl_internal_get_InitialValue() const;

constexpr T& __cordl_internal_get_InitialValue() ;

constexpr T const& __cordl_internal_get___value_k__BackingField() const;

constexpr T& __cordl_internal_get___value_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::System::Action_1<T>*>* const& __cordl_internal_get_callbacks() const;

constexpr ::System::Collections::Generic::List_1<::System::Action_1<T>*>*& __cordl_internal_get_callbacks() ;

constexpr ::GlobalNamespace::EnterPlayID const& __cordl_internal_get_enterPlayID() const;

constexpr ::GlobalNamespace::EnterPlayID& __cordl_internal_get_enterPlayID() ;

constexpr void __cordl_internal_set_InitialValue(T  value) ;

constexpr void __cordl_internal_set___value_k__BackingField(T  value) ;

constexpr void __cordl_internal_set_callbacks(::System::Collections::Generic::List_1<::System::Action_1<T>*>*  value) ;

constexpr void __cordl_internal_set_enterPlayID(::GlobalNamespace::EnterPlayID  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T get_Value() ;

/// [CompilerGenerated]
/// @brief Method get__value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T get__value() ;

/// @brief Method set_Value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Value(T  value) ;

/// [CompilerGenerated]
/// @brief Method set__value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set__value(T  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WatchableGenericSO_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WatchableGenericSO_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WatchableGenericSO_1(WatchableGenericSO_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WatchableGenericSO_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WatchableGenericSO_1(WatchableGenericSO_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{949};

/// @brief Field InitialValue, offset: 0x18, size: 0x8, def value: None
 T  ___InitialValue;

/// [CompilerGenerated]
/// @brief Field <_value>k__BackingField, offset: 0x20, size: 0x8, def value: None
 T  _____value_k__BackingField;

/// @brief Field enterPlayID, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::EnterPlayID  ___enterPlayID;

/// @brief Field callbacks, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Action_1<T>*>*  ___callbacks;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
