#pragma once
// IWYU pragma private; include "Modio/Mods/ModDependencies.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ModDependencies)
namespace GlobalNamespace {
struct ModDependencies__FetchDependencies_d__14;
}
namespace GlobalNamespace {
struct ModDependencies__GetAllDependencies_d__13;
}
namespace Modio::API::SchemaDefinitions {
struct ModDependenciesObject;
}
namespace Modio::API::SchemaDefinitions {
struct ModObject;
}
namespace Modio::Mods {
class ModDependencies___c;
}
namespace Modio::Mods {
class Mod;
}
namespace Modio {
class Error;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
// Forward declare root types
namespace Modio::Mods {
class ModDependencies;
}
namespace Modio::Mods {
class ModDependencies___c;
}
// Write type traits
MARK_REF_T(::Modio::Mods::ModDependencies*);
MARK_REF_T(::Modio::Mods::ModDependencies___c*);
DEFINE_IL2CPP_CLASS(::Modio::Mods::ModDependencies*, "Modio.Mods", "ModDependencies");
DEFINE_IL2CPP_CLASS(::Modio::Mods::ModDependencies___c*, "Modio.Mods", "ModDependencies/<>c");
// Dependencies System.Collections.Generic.List`1<T>, System.Object
namespace Modio::Mods {
// Is value type: false
// CS Name: Modio.Mods.ModDependencies
class CORDL_TYPE ModDependencies : public ::System::Object {
public:
// Declarations
using _FetchDependencies_d__14 = ::GlobalNamespace::ModDependencies__FetchDependencies_d__14;

using _GetAllDependencies_d__13 = ::GlobalNamespace::ModDependencies__GetAllDependencies_d__13;

using __c = ::Modio::Mods::ModDependencies___c;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_HasDependencies)) bool  HasDependencies;

 __declspec(property(get=get_IsMapped)) bool  IsMapped;

/// @brief Field <HasDependencies>k__BackingField, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__HasDependencies_k__BackingField, put=__cordl_internal_set__HasDependencies_k__BackingField)) bool  _HasDependencies_k__BackingField;

/// @brief Field _dependent, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__dependent, put=__cordl_internal_set__dependent)) ::Modio::Mods::Mod*  _dependent;

/// @brief Field _depthMap, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__depthMap, put=__cordl_internal_set__depthMap)) ::ArrayW<::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*>  _depthMap;

/// @brief Field _flattenedMods, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__flattenedMods, put=__cordl_internal_set__flattenedMods)) ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*  _flattenedMods;

/// @brief Field _isFetchingDependencies, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__isFetchingDependencies, put=__cordl_internal_set__isFetchingDependencies)) ::System::Threading::Tasks::TaskCompletionSource_1<::Modio::Error*>*  _isFetchingDependencies;

/// @brief Method ConstructModObject, addr 0xa02f74c, size 0x1dc, virtual false, abstract: false, final false
static inline ::Modio::API::SchemaDefinitions::ModObject ConstructModObject(::Modio::API::SchemaDefinitions::ModDependenciesObject  dependency) ;

/// [AsyncStateMachine(typeof(Modio.Mods.ModDependencies::<FetchDependencies>d__14))]
/// @brief Method FetchDependencies, addr 0xa02f628, size 0x10c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* FetchDependencies() ;

/// [AsyncStateMachine(typeof(Modio.Mods.ModDependencies::<GetAllDependencies>d__13))]
/// @brief Method GetAllDependencies, addr 0xa02f358, size 0x108, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*>>* GetAllDependencies() ;

static inline ::Modio::Mods::ModDependencies* New_ctor(::Modio::Mods::Mod*  dependent, bool  hasDependencies) ;

constexpr bool const& __cordl_internal_get__HasDependencies_k__BackingField() const;

constexpr bool& __cordl_internal_get__HasDependencies_k__BackingField() ;

constexpr ::Modio::Mods::Mod* const& __cordl_internal_get__dependent() const;

constexpr ::Modio::Mods::Mod*& __cordl_internal_get__dependent() ;

constexpr ::ArrayW<::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*> const& __cordl_internal_get__depthMap() const;

constexpr ::ArrayW<::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*>& __cordl_internal_get__depthMap() ;

constexpr ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>* const& __cordl_internal_get__flattenedMods() const;

constexpr ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*& __cordl_internal_get__flattenedMods() ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Modio::Error*>* const& __cordl_internal_get__isFetchingDependencies() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Modio::Error*>*& __cordl_internal_get__isFetchingDependencies() ;

constexpr void __cordl_internal_set__HasDependencies_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__dependent(::Modio::Mods::Mod*  value) ;

constexpr void __cordl_internal_set__depthMap(::ArrayW<::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*>  value) ;

constexpr void __cordl_internal_set__flattenedMods(::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*  value) ;

constexpr void __cordl_internal_set__isFetchingDependencies(::System::Threading::Tasks::TaskCompletionSource_1<::Modio::Error*>*  value) ;

/// @brief Method .ctor, addr 0xa029104, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::Modio::Mods::Mod*  dependent, bool  hasDependencies) ;

/// @brief Method get_Count, addr 0xa02f4dc, size 0x14c, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// [CompilerGenerated]
/// @brief Method get_HasDependencies, addr 0xa02f734, size 0x8, virtual false, abstract: false, final false
inline bool get_HasDependencies() ;

/// @brief Method get_IsMapped, addr 0xa02f73c, size 0x10, virtual false, abstract: false, final false
inline bool get_IsMapped() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModDependencies() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModDependencies", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModDependencies(ModDependencies && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModDependencies", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModDependencies(ModDependencies const& ) = delete;

/// @brief Field MAX_DEPTH offset 0xffffffff size 0x4
static constexpr int32_t  MAX_DEPTH{static_cast<int32_t>(0x5)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17588};

/// [CompilerGenerated]
/// @brief Field <HasDependencies>k__BackingField, offset: 0x10, size: 0x1, def value: None
 bool  ____HasDependencies_k__BackingField;

/// @brief Field _isFetchingDependencies, offset: 0x18, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<::Modio::Error*>*  ____isFetchingDependencies;

/// @brief Field _depthMap, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*>  ____depthMap;

/// @brief Field _dependent, offset: 0x28, size: 0x8, def value: None
 ::Modio::Mods::Mod*  ____dependent;

/// @brief Field _flattenedMods, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*  ____flattenedMods;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Mods::ModDependencies, ____HasDependencies_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::ModDependencies, ____isFetchingDependencies) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::ModDependencies, ____depthMap) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::ModDependencies, ____dependent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::ModDependencies, ____flattenedMods) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Modio::Mods::ModDependencies) == 0x38, "Size mismatch!");

} // namespace end def Modio::Mods
// [CompilerGenerated]
// Dependencies System.Object
namespace Modio::Mods {
// Is value type: false
// CS Name: Modio.Mods.ModDependencies/<>c
class CORDL_TYPE ModDependencies___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Modio::Mods::ModDependencies___c*  __9;

/// @brief Field <>9__2_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_0, put=setStaticF___9__2_0)) ::System::Func_2<::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*,int32_t>*  __9__2_0;

static inline ::Modio::Mods::ModDependencies___c* New_ctor() ;

/// @brief Method .ctor, addr 0xa02f990, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method <get_Count>b__2_0, addr 0xa02f998, size 0x44, virtual false, abstract: false, final false
inline int32_t _get_Count_b__2_0(::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*  list) ;

static inline ::Modio::Mods::ModDependencies___c* getStaticF___9() ;

static inline ::System::Func_2<::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*,int32_t>* getStaticF___9__2_0() ;

static inline void setStaticF___9(::Modio::Mods::ModDependencies___c*  value) ;

static inline void setStaticF___9__2_0(::System::Func_2<::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*,int32_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModDependencies___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModDependencies___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModDependencies___c(ModDependencies___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModDependencies___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModDependencies___c(ModDependencies___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17585};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Mods::ModDependencies___c) == 0x10, "Size mismatch!");

} // namespace end def Modio::Mods
