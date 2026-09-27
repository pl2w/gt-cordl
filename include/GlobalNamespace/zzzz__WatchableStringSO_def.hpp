#pragma once
// IWYU pragma private; include "GlobalNamespace/WatchableStringSO.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EnterPlayID_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(WatchableStringSO)
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
class WatchableStringSO;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::WatchableStringSO*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::WatchableStringSO*, "", "WatchableStringSO");
// [CreateAssetMenu(fileName = "WatchableStringSO", menuName = "ScriptableObjects/WatchableStringSO")]
// Dependencies EnterPlayID, UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: WatchableStringSO
class CORDL_TYPE WatchableStringSO : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field InitialValue, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_InitialValue, put=__cordl_internal_set_InitialValue)) ::StringW  InitialValue;

 __declspec(property(get=get_Value, put=set_Value)) ::StringW  Value;

/// @brief Field <_value>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___value_k__BackingField, put=__cordl_internal_set___value_k__BackingField)) ::StringW  __value_k__BackingField;

 __declspec(property(get=get__value, put=set__value)) ::StringW  _value;

/// @brief Field callbacks, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_callbacks, put=__cordl_internal_set_callbacks)) ::System::Collections::Generic::List_1<::System::Action_1<::StringW>*>*  callbacks;

/// @brief Field enterPlayID, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_enterPlayID, put=__cordl_internal_set_enterPlayID)) ::GlobalNamespace::EnterPlayID  enterPlayID;

/// @brief Method AddCallback, addr 0x56b5b48, size 0x1e0, virtual false, abstract: false, final false
inline void AddCallback(::System::Action_1<::StringW>*  callback, bool  shouldCallbackNow) ;

/// @brief Method EnsureInitialized, addr 0x56b5908, size 0xe0, virtual false, abstract: false, final false
inline void EnsureInitialized() ;

static inline ::GlobalNamespace::WatchableStringSO* New_ctor() ;

/// @brief Method RemoveCallback, addr 0x56b5d28, size 0x60, virtual false, abstract: false, final false
inline void RemoveCallback(::System::Action_1<::StringW>*  callback) ;

/// @brief Method ToString, addr 0x56b5d88, size 0x18, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::StringW const& __cordl_internal_get_InitialValue() const;

constexpr ::StringW& __cordl_internal_get_InitialValue() ;

constexpr ::StringW const& __cordl_internal_get___value_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get___value_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::System::Action_1<::StringW>*>* const& __cordl_internal_get_callbacks() const;

constexpr ::System::Collections::Generic::List_1<::System::Action_1<::StringW>*>*& __cordl_internal_get_callbacks() ;

constexpr ::GlobalNamespace::EnterPlayID const& __cordl_internal_get_enterPlayID() const;

constexpr ::GlobalNamespace::EnterPlayID& __cordl_internal_get_enterPlayID() ;

constexpr void __cordl_internal_set_InitialValue(::StringW  value) ;

constexpr void __cordl_internal_set___value_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set_callbacks(::System::Collections::Generic::List_1<::System::Action_1<::StringW>*>*  value) ;

constexpr void __cordl_internal_set_enterPlayID(::GlobalNamespace::EnterPlayID  value) ;

/// @brief Method .ctor, addr 0x56b5da0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Value, addr 0x56b58f0, size 0x18, virtual false, abstract: false, final false
inline ::StringW get_Value() ;

/// [CompilerGenerated]
/// @brief Method get__value, addr 0x56b58e0, size 0x8, virtual false, abstract: false, final false
inline ::StringW get__value() ;

/// @brief Method set_Value, addr 0x56b59e8, size 0x160, virtual false, abstract: false, final false
inline void set_Value(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set__value, addr 0x56b58e8, size 0x8, virtual false, abstract: false, final false
inline void set__value(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WatchableStringSO() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WatchableStringSO", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WatchableStringSO(WatchableStringSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WatchableStringSO", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WatchableStringSO(WatchableStringSO const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{950};

/// [TextArea]
/// @brief Field InitialValue, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___InitialValue;

/// [CompilerGenerated]
/// @brief Field <_value>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::StringW  _____value_k__BackingField;

/// @brief Field enterPlayID, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::EnterPlayID  ___enterPlayID;

/// @brief Field callbacks, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Action_1<::StringW>*>*  ___callbacks;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::WatchableStringSO, ___InitialValue) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WatchableStringSO, _____value_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WatchableStringSO, ___enterPlayID) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WatchableStringSO, ___callbacks) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::WatchableStringSO) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
