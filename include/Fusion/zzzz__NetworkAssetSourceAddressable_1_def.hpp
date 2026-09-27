#pragma once
// IWYU pragma private; include "Fusion/NetworkAssetSourceAddressable_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkAssetSourceAddressable_1)
namespace System {
class Object;
}
namespace UnityEngine::AddressableAssets {
class AssetReference;
}
// Forward declare root types
namespace Fusion {
template<typename T>
class NetworkAssetSourceAddressable_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Fusion::NetworkAssetSourceAddressable_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Fusion::NetworkAssetSourceAddressable_1, "Fusion", "NetworkAssetSourceAddressable`1");
// Dependencies System.Object, UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle
namespace Fusion {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Fusion.NetworkAssetSourceAddressable`1<T>
class CORDL_TYPE NetworkAssetSourceAddressable_1 : public ::System::Object {
public:
// Declarations
/// @brief [Obsolete("Use RuntimeKey instead")]
 __declspec(property(get=get_Address, put=set_Address)) ::UnityEngine::AddressableAssets::AssetReference*  Address;

 __declspec(property(get=get_Description)) ::StringW  Description;

 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

/// @brief Field RuntimeKey, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_RuntimeKey, put=__cordl_internal_set_RuntimeKey)) ::StringW  RuntimeKey;

/// @brief Field _acquireCount, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__acquireCount, put=__cordl_internal_set__acquireCount)) int32_t  _acquireCount;

/// @brief Field _op, offset 0x20, size 0x18 
 __declspec(property(get=__cordl_internal_get__op, put=__cordl_internal_set__op)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  _op;

/// @brief Method Acquire, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Acquire(bool  synchronous) ;

/// @brief Method LoadInternal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void LoadInternal(bool  synchronous) ;

static inline ::Fusion::NetworkAssetSourceAddressable_1<T>* New_ctor() ;

/// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Release() ;

/// @brief Method UnloadInternal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void UnloadInternal() ;

/// @brief Method ValidateResult, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T ValidateResult(::System::Object*  result) ;

/// @brief Method WaitForResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline T WaitForResult() ;

constexpr ::StringW const& __cordl_internal_get_RuntimeKey() const;

constexpr ::StringW& __cordl_internal_get_RuntimeKey() ;

constexpr int32_t const& __cordl_internal_get__acquireCount() const;

constexpr int32_t& __cordl_internal_get__acquireCount() ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle const& __cordl_internal_get__op() const;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle& __cordl_internal_get__op() ;

constexpr void __cordl_internal_set_RuntimeKey(::StringW  value) ;

constexpr void __cordl_internal_set__acquireCount(int32_t  value) ;

constexpr void __cordl_internal_set__op(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Address, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::UnityEngine::AddressableAssets::AssetReference* get_Address() ;

/// @brief Method get_Description, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::StringW get_Description() ;

/// @brief Method get_IsCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool get_IsCompleted() ;

/// @brief Method set_Address, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Address(::UnityEngine::AddressableAssets::AssetReference*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkAssetSourceAddressable_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkAssetSourceAddressable_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkAssetSourceAddressable_1(NetworkAssetSourceAddressable_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkAssetSourceAddressable_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkAssetSourceAddressable_1(NetworkAssetSourceAddressable_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23412};

/// [UnityAddressablesRuntimeKey]
/// @brief Field RuntimeKey, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___RuntimeKey;

/// @brief Field _acquireCount, offset: 0x18, size: 0x4, def value: None
 int32_t  ____acquireCount;

/// @brief Field _op, offset: 0x20, size: 0x18, def value: None
 ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  ____op;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Fusion
