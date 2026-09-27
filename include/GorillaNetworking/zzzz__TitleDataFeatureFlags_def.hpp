#pragma once
// IWYU pragma private; include "GorillaNetworking/TitleDataFeatureFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TitleDataFeatureFlags)
namespace PlayFab {
class PlayFabError;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
// Forward declare root types
namespace GorillaNetworking {
class TitleDataFeatureFlags;
}
// Write type traits
MARK_REF_T(::GorillaNetworking::TitleDataFeatureFlags*);
DEFINE_IL2CPP_CLASS(::GorillaNetworking::TitleDataFeatureFlags*, "GorillaNetworking", "TitleDataFeatureFlags");
// Dependencies System.Object
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.TitleDataFeatureFlags
class CORDL_TYPE TitleDataFeatureFlags : public ::System::Object {
public:
// Declarations
/// @brief Field TitleDataKey, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_TitleDataKey, put=__cordl_internal_set_TitleDataKey)) ::StringW  TitleDataKey;

/// @brief Field <ready>k__BackingField, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__ready_k__BackingField, put=__cordl_internal_set__ready_k__BackingField)) bool  _ready_k__BackingField;

/// @brief Field defaults, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaults, put=__cordl_internal_set_defaults)) ::System::Collections::Generic::Dictionary_2<::StringW,bool>*  defaults;

/// @brief Field flagValueByName, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_flagValueByName, put=__cordl_internal_set_flagValueByName)) ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  flagValueByName;

/// @brief Field flagValueByUser, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_flagValueByUser, put=__cordl_internal_set_flagValueByUser)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::StringW>*>*  flagValueByUser;

/// @brief Field logSent, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_logSent, put=__cordl_internal_set_logSent)) ::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::StringW,::StringW>>*  logSent;

 __declspec(property(get=get_ready, put=set_ready)) bool  ready;

/// @brief Method FetchFeatureFlags, addr 0x5c8c368, size 0x118, virtual false, abstract: false, final false
inline void FetchFeatureFlags() ;

/// @brief Method IsEnabled, addr 0x5c8e754, size 0x70, virtual false, abstract: false, final false
inline bool IsEnabled(::StringW  flagName) ;

/// @brief Method IsEnabledForAnyone, addr 0x5c8ed5c, size 0x11c, virtual false, abstract: false, final false
inline bool IsEnabledForAnyone(::StringW  flagName) ;

/// @brief Method IsEnabledForUser, addr 0x5c8eb04, size 0x208, virtual false, abstract: false, final false
inline bool IsEnabledForUser(::StringW  flagName, ::StringW  playFabId) ;

static inline ::GorillaNetworking::TitleDataFeatureFlags* New_ctor() ;

/// [CompilerGenerated]
/// @brief Method <FetchFeatureFlags>b__8_0, addr 0x5c906b0, size 0x2f0, virtual false, abstract: false, final false
inline void _FetchFeatureFlags_b__8_0(::StringW  json) ;

/// [CompilerGenerated]
/// @brief Method <FetchFeatureFlags>b__8_1, addr 0x5c909a0, size 0x9c, virtual false, abstract: false, final false
inline void _FetchFeatureFlags_b__8_1(::PlayFab::PlayFabError*  e) ;

constexpr ::StringW const& __cordl_internal_get_TitleDataKey() const;

constexpr ::StringW& __cordl_internal_get_TitleDataKey() ;

constexpr bool const& __cordl_internal_get__ready_k__BackingField() const;

constexpr bool& __cordl_internal_get__ready_k__BackingField() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,bool>* const& __cordl_internal_get_defaults() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,bool>*& __cordl_internal_get_defaults() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>* const& __cordl_internal_get_flagValueByName() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*& __cordl_internal_get_flagValueByName() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::StringW>*>* const& __cordl_internal_get_flagValueByUser() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::StringW>*>*& __cordl_internal_get_flagValueByUser() ;

constexpr ::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::StringW,::StringW>>* const& __cordl_internal_get_logSent() const;

constexpr ::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::StringW,::StringW>>*& __cordl_internal_get_logSent() ;

constexpr void __cordl_internal_set_TitleDataKey(::StringW  value) ;

constexpr void __cordl_internal_set__ready_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_defaults(::System::Collections::Generic::Dictionary_2<::StringW,bool>*  value) ;

constexpr void __cordl_internal_set_flagValueByName(::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  value) ;

constexpr void __cordl_internal_set_flagValueByUser(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::StringW>*>*  value) ;

constexpr void __cordl_internal_set_logSent(::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::StringW,::StringW>>*  value) ;

/// @brief Method .ctor, addr 0x5c8f050, size 0x214, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_ready, addr 0x5c90450, size 0x8, virtual false, abstract: false, final false
inline bool get_ready() ;

/// [CompilerGenerated]
/// @brief Method set_ready, addr 0x5c90458, size 0x8, virtual false, abstract: false, final false
inline void set_ready(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TitleDataFeatureFlags() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TitleDataFeatureFlags", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TitleDataFeatureFlags(TitleDataFeatureFlags && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TitleDataFeatureFlags", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TitleDataFeatureFlags(TitleDataFeatureFlags const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4366};

/// @brief Field TitleDataKey, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___TitleDataKey;

/// [CompilerGenerated]
/// @brief Field <ready>k__BackingField, offset: 0x18, size: 0x1, def value: None
 bool  ____ready_k__BackingField;

/// @brief Field defaults, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,bool>*  ___defaults;

/// @brief Field flagValueByName, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  ___flagValueByName;

/// @brief Field flagValueByUser, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::StringW>*>*  ___flagValueByUser;

/// [TupleElementNames(new[] { "flagName", "playFabId" })]
/// @brief Field logSent, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::StringW,::StringW>>*  ___logSent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::TitleDataFeatureFlags, ___TitleDataKey) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::TitleDataFeatureFlags, ____ready_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::TitleDataFeatureFlags, ___defaults) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::TitleDataFeatureFlags, ___flagValueByName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::TitleDataFeatureFlags, ___flagValueByUser) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::TitleDataFeatureFlags, ___logSent) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::TitleDataFeatureFlags) == 0x40, "Size mismatch!");

} // namespace end def GorillaNetworking
