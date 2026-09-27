#pragma once
// IWYU pragma private; include "Liv/Lck/Cosmetics/LckCosmeticUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LckCosmeticUtils)
namespace GlobalNamespace {
struct LckCosmeticUtils_CosmeticRootInfo;
}
namespace GlobalNamespace {
struct LckCosmeticUtils__LoadRootsFromBundleAsync_d__3;
}
namespace Liv::Lck::Cosmetics {
class LckCosmeticUtils___c;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IReadOnlyDictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine {
class AssetBundleRequest;
}
namespace UnityEngine {
class AssetBundle;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Liv::Lck::Cosmetics {
class LckCosmeticUtils;
}
namespace Liv::Lck::Cosmetics {
class LckCosmeticUtils___c;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Cosmetics::LckCosmeticUtils*);
MARK_REF_T(::Liv::Lck::Cosmetics::LckCosmeticUtils___c*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Cosmetics::LckCosmeticUtils*, "Liv.Lck.Cosmetics", "LckCosmeticUtils");
DEFINE_IL2CPP_CLASS(::Liv::Lck::Cosmetics::LckCosmeticUtils___c*, "Liv.Lck.Cosmetics", "LckCosmeticUtils/<>c");
// Dependencies System.Object
namespace Liv::Lck::Cosmetics {
// Is value type: false
// CS Name: Liv.Lck.Cosmetics.LckCosmeticUtils
class CORDL_TYPE LckCosmeticUtils : public ::System::Object {
public:
// Declarations
using CosmeticRootInfo = ::GlobalNamespace::LckCosmeticUtils_CosmeticRootInfo;

using _LoadRootsFromBundleAsync_d__3 = ::GlobalNamespace::LckCosmeticUtils__LoadRootsFromBundleAsync_d__3;

using __c = ::Liv::Lck::Cosmetics::LckCosmeticUtils___c;

/// @brief Method LoadRootsFromBundle, addr 0x9d6ae94, size 0x668, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* LoadRootsFromBundle(::UnityEngine::AssetBundle*  bundle, ::System::Collections::Generic::List_1<::GlobalNamespace::LckCosmeticUtils_CosmeticRootInfo>*  rootInfos, ::StringW  cosmeticIdForLogging) ;

/// [AsyncStateMachine(typeof(Liv.Lck.Cosmetics.LckCosmeticUtils::<LoadRootsFromBundleAsync>d__3))]
/// @brief Method LoadRootsFromBundleAsync, addr 0x9d6a248, size 0x13c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>* LoadRootsFromBundleAsync(::UnityEngine::AssetBundle*  bundle, ::System::Collections::Generic::List_1<::GlobalNamespace::LckCosmeticUtils_CosmeticRootInfo>*  rootInfos, ::StringW  cosmeticIdForLogging) ;

/// @brief Method ParseRootsFromMetadata, addr 0x9d69b24, size 0x724, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::GlobalNamespace::LckCosmeticUtils_CosmeticRootInfo>* ParseRootsFromMetadata(::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::System::Object*>*  metadata) ;

/// @brief Method ParseRootsFromTomlString, addr 0x9d6ab10, size 0x384, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::GlobalNamespace::LckCosmeticUtils_CosmeticRootInfo>* ParseRootsFromTomlString(::StringW  tomlContent) ;

/// @brief Method ResolveType, addr 0x9d6b4fc, size 0x2a4, virtual false, abstract: false, final false
static inline ::System::Type* ResolveType(::StringW  typeName) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckCosmeticUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckCosmeticUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckCosmeticUtils(LckCosmeticUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckCosmeticUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckCosmeticUtils(LckCosmeticUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24995};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::Cosmetics::LckCosmeticUtils) == 0x10, "Size mismatch!");

} // namespace end def Liv::Lck::Cosmetics
// [CompilerGenerated]
// Dependencies System.Object
namespace Liv::Lck::Cosmetics {
// Is value type: false
// CS Name: Liv.Lck.Cosmetics.LckCosmeticUtils/<>c
class CORDL_TYPE LckCosmeticUtils___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Liv::Lck::Cosmetics::LckCosmeticUtils___c*  __9;

/// @brief Field <>9__3_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__3_0, put=setStaticF___9__3_0)) ::System::Func_2<::UnityEngine::AssetBundleRequest*,::System::Threading::Tasks::Task*>*  __9__3_0;

/// @brief Field <>9__3_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__3_1, put=setStaticF___9__3_1)) ::System::Func_2<::UnityEngine::AssetBundleRequest*,bool>*  __9__3_1;

/// @brief Field <>9__3_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__3_2, put=setStaticF___9__3_2)) ::System::Func_2<::UnityEngine::AssetBundleRequest*,::UnityW<::UnityEngine::Object>>*  __9__3_2;

static inline ::Liv::Lck::Cosmetics::LckCosmeticUtils___c* New_ctor() ;

/// @brief Method <LoadRootsFromBundleAsync>b__3_0, addr 0x9d6b810, size 0xc, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* _LoadRootsFromBundleAsync_b__3_0(::UnityEngine::AssetBundleRequest*  req) ;

/// @brief Method <LoadRootsFromBundleAsync>b__3_1, addr 0x9d6b81c, size 0x78, virtual false, abstract: false, final false
inline bool _LoadRootsFromBundleAsync_b__3_1(::UnityEngine::AssetBundleRequest*  req) ;

/// @brief Method <LoadRootsFromBundleAsync>b__3_2, addr 0x9d6b894, size 0x18, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Object> _LoadRootsFromBundleAsync_b__3_2(::UnityEngine::AssetBundleRequest*  req) ;

/// @brief Method .ctor, addr 0x9d6b808, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Liv::Lck::Cosmetics::LckCosmeticUtils___c* getStaticF___9() ;

static inline ::System::Func_2<::UnityEngine::AssetBundleRequest*,::System::Threading::Tasks::Task*>* getStaticF___9__3_0() ;

static inline ::System::Func_2<::UnityEngine::AssetBundleRequest*,bool>* getStaticF___9__3_1() ;

static inline ::System::Func_2<::UnityEngine::AssetBundleRequest*,::UnityW<::UnityEngine::Object>>* getStaticF___9__3_2() ;

static inline void setStaticF___9(::Liv::Lck::Cosmetics::LckCosmeticUtils___c*  value) ;

static inline void setStaticF___9__3_0(::System::Func_2<::UnityEngine::AssetBundleRequest*,::System::Threading::Tasks::Task*>*  value) ;

static inline void setStaticF___9__3_1(::System::Func_2<::UnityEngine::AssetBundleRequest*,bool>*  value) ;

static inline void setStaticF___9__3_2(::System::Func_2<::UnityEngine::AssetBundleRequest*,::UnityW<::UnityEngine::Object>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckCosmeticUtils___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckCosmeticUtils___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckCosmeticUtils___c(LckCosmeticUtils___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckCosmeticUtils___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckCosmeticUtils___c(LckCosmeticUtils___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24993};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::Cosmetics::LckCosmeticUtils___c) == 0x10, "Size mismatch!");

} // namespace end def Liv::Lck::Cosmetics
