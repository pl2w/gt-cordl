#pragma once
// IWYU pragma private; include "Fusion/NetworkAssetSourceResource_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkAssetSourceResource_1)
namespace Fusion {
template<typename T>
class NetworkAssetSourceResource_1___c;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AsyncOperation;
}
namespace UnityEngine {
class ResourceRequest;
}
// Forward declare root types
namespace Fusion {
template<typename T>
class NetworkAssetSourceResource_1;
}
namespace Fusion {
template<typename T>
class NetworkAssetSourceResource_1___c;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Fusion::NetworkAssetSourceResource_1);
MARK_GEN_REF_T_PTR(::Fusion::NetworkAssetSourceResource_1___c);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Fusion::NetworkAssetSourceResource_1, "Fusion", "NetworkAssetSourceResource`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Fusion::NetworkAssetSourceResource_1___c, "Fusion", "NetworkAssetSourceResource`1/<>c");
// Dependencies System.Object
namespace Fusion {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Fusion.NetworkAssetSourceResource`1<T>
class CORDL_TYPE NetworkAssetSourceResource_1 : public ::System::Object {
public:
// Declarations
using __c = ::Fusion::NetworkAssetSourceResource_1___c<T>;

 __declspec(property(get=get_Description)) ::StringW  Description;

 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

/// @brief Field ResourcePath, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_ResourcePath, put=__cordl_internal_set_ResourcePath)) ::StringW  ResourcePath;

/// @brief Field SubObjectName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_SubObjectName, put=__cordl_internal_set_SubObjectName)) ::StringW  SubObjectName;

/// @brief Field _acquireCount, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__acquireCount, put=__cordl_internal_set__acquireCount)) int32_t  _acquireCount;

/// @brief Field _state, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__state, put=__cordl_internal_set__state)) ::System::Object*  _state;

/// @brief Method Acquire, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Acquire(bool  synchronous) ;

/// @brief Method FinishAsyncOp, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void FinishAsyncOp(::UnityEngine::ResourceRequest*  asyncOp) ;

/// @brief Method LoadInternal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void LoadInternal(bool  synchronous) ;

/// @brief Method LoadNamedResource, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline T LoadNamedResource(::StringW  resoucePath, ::StringW  subObjectName) ;

static inline ::Fusion::NetworkAssetSourceResource_1<T>* New_ctor() ;

/// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Release() ;

/// @brief Method UnloadInternal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void UnloadInternal() ;

/// @brief Method WaitForResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline T WaitForResult() ;

constexpr ::StringW const& __cordl_internal_get_ResourcePath() const;

constexpr ::StringW& __cordl_internal_get_ResourcePath() ;

constexpr ::StringW const& __cordl_internal_get_SubObjectName() const;

constexpr ::StringW& __cordl_internal_get_SubObjectName() ;

constexpr int32_t const& __cordl_internal_get__acquireCount() const;

constexpr int32_t& __cordl_internal_get__acquireCount() ;

constexpr ::System::Object* const& __cordl_internal_get__state() const;

constexpr ::System::Object*& __cordl_internal_get__state() ;

constexpr void __cordl_internal_set_ResourcePath(::StringW  value) ;

constexpr void __cordl_internal_set_SubObjectName(::StringW  value) ;

constexpr void __cordl_internal_set__acquireCount(int32_t  value) ;

constexpr void __cordl_internal_set__state(::System::Object*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Description, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::StringW get_Description() ;

/// @brief Method get_IsCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool get_IsCompleted() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkAssetSourceResource_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkAssetSourceResource_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkAssetSourceResource_1(NetworkAssetSourceResource_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkAssetSourceResource_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkAssetSourceResource_1(NetworkAssetSourceResource_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23414};

/// [UnityResourcePath(typeof(UnityEngine.Object))]
/// @brief Field ResourcePath, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___ResourcePath;

/// @brief Field SubObjectName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___SubObjectName;

/// @brief Field _state, offset: 0x20, size: 0x8, def value: None
 ::System::Object*  ____state;

/// @brief Field _acquireCount, offset: 0x28, size: 0x4, def value: None
 int32_t  ____acquireCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Fusion
// [CompilerGenerated]
// Dependencies System.Object
namespace Fusion {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Fusion.NetworkAssetSourceResource`1/<>c<T>
class CORDL_TYPE NetworkAssetSourceResource_1___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Fusion::NetworkAssetSourceResource_1___c<T>*  __9;

/// @brief Field <>9__12_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__12_0, put=setStaticF___9__12_0)) ::System::Action_1<::UnityEngine::AsyncOperation*>*  __9__12_0;

static inline ::Fusion::NetworkAssetSourceResource_1___c<T>* New_ctor() ;

/// @brief Method <UnloadInternal>b__12_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _UnloadInternal_b__12_0(::UnityEngine::AsyncOperation*  op) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Fusion::NetworkAssetSourceResource_1___c<T>* getStaticF___9() ;

static inline ::System::Action_1<::UnityEngine::AsyncOperation*>* getStaticF___9__12_0() ;

static inline void setStaticF___9(::Fusion::NetworkAssetSourceResource_1___c<T>*  value) ;

static inline void setStaticF___9__12_0(::System::Action_1<::UnityEngine::AsyncOperation*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkAssetSourceResource_1___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkAssetSourceResource_1___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkAssetSourceResource_1___c(NetworkAssetSourceResource_1___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkAssetSourceResource_1___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkAssetSourceResource_1___c(NetworkAssetSourceResource_1___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23413};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Fusion
