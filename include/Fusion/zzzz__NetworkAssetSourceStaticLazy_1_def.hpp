#pragma once
// IWYU pragma private; include "Fusion/NetworkAssetSourceStaticLazy_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__LazyLoadReference_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(NetworkAssetSourceStaticLazy_1)
namespace UnityEngine {
template<typename T>
struct LazyLoadReference_1;
}
// Forward declare root types
namespace Fusion {
template<typename T>
class NetworkAssetSourceStaticLazy_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Fusion::NetworkAssetSourceStaticLazy_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Fusion::NetworkAssetSourceStaticLazy_1, "Fusion", "NetworkAssetSourceStaticLazy`1");
// Dependencies System.Object, UnityEngine.LazyLoadReference`1<T>
namespace Fusion {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Fusion.NetworkAssetSourceStaticLazy`1<T>
class CORDL_TYPE NetworkAssetSourceStaticLazy_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Description)) ::StringW  Description;

 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

/// @brief Field Object, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_Object, put=__cordl_internal_set_Object)) ::UnityEngine::LazyLoadReference_1<T>  Object;

/// @brief [Obsolete("Use Object instead")]
 __declspec(property(get=get_Prefab, put=set_Prefab)) ::UnityEngine::LazyLoadReference_1<T>  Prefab;

/// @brief Method Acquire, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Acquire(bool  synchronous) ;

static inline ::Fusion::NetworkAssetSourceStaticLazy_1<T>* New_ctor() ;

/// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Release() ;

/// @brief Method WaitForResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline T WaitForResult() ;

constexpr ::UnityEngine::LazyLoadReference_1<T> const& __cordl_internal_get_Object() const;

constexpr ::UnityEngine::LazyLoadReference_1<T>& __cordl_internal_get_Object() ;

constexpr void __cordl_internal_set_Object(::UnityEngine::LazyLoadReference_1<T>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Description, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::StringW get_Description() ;

/// @brief Method get_IsCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool get_IsCompleted() ;

/// @brief Method get_Prefab, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::UnityEngine::LazyLoadReference_1<T> get_Prefab() ;

/// @brief Method set_Prefab, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Prefab(::UnityEngine::LazyLoadReference_1<T>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkAssetSourceStaticLazy_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkAssetSourceStaticLazy_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkAssetSourceStaticLazy_1(NetworkAssetSourceStaticLazy_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkAssetSourceStaticLazy_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkAssetSourceStaticLazy_1(NetworkAssetSourceStaticLazy_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23416};

/// [FormerlySerializedAs("Prefab")]
/// @brief Field Object, offset: 0x10, size: 0x4, def value: None
 ::UnityEngine::LazyLoadReference_1<T>  ___Object;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Fusion
