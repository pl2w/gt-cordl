#pragma once
// IWYU pragma private; include "GlobalNamespace/GTSystem_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GTSystem_1)
namespace GlobalNamespace {
template<typename T>
class GTSystem_1___c;
}
namespace Photon::Pun {
class PhotonView;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyCollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class GTSystem_1;
}
namespace GlobalNamespace {
template<typename T>
class GTSystem_1___c;
}
// Write type traits
MARK_GEN_REF_T_PTR(::GlobalNamespace::GTSystem_1);
MARK_GEN_REF_T_PTR(::GlobalNamespace::GTSystem_1___c);
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::GTSystem_1, "", "GTSystem`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::GTSystem_1___c, "", "GTSystem`1/<>c");
// [DisallowMultipleComponent]
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: false
// CS Name: GTSystem`1<T>
class CORDL_TYPE GTSystem_1 : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::GlobalNamespace::GTSystem_1___c<T>;

 __declspec(property(get=System_Collections_Generic_IReadOnlyCollection_T__get_Count)) int32_t  System_Collections_Generic_IReadOnlyCollection_T__Count;

 __declspec(property(get=System_Collections_Generic_IReadOnlyList_T__get_Item)) T  System_Collections_Generic_IReadOnlyList_T__Item[];

/// @brief Field _instances, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__instances, put=__cordl_internal_set__instances)) ::System::Collections::Generic::List_1<T>*  _instances;

/// @brief Field _networked, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__networked, put=__cordl_internal_set__networked)) bool  _networked;

/// @brief Field _photonView, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__photonView, put=__cordl_internal_set__photonView)) ::UnityW<::Photon::Pun::PhotonView>  _photonView;

/// @brief Field gAppQuitting, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_gAppQuitting, put=setStaticF_gAppQuitting)) bool  gAppQuitting;

/// @brief Field gInitializing, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_gInitializing, put=setStaticF_gInitializing)) bool  gInitializing;

/// @brief Field gQueueRegister, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gQueueRegister, put=setStaticF_gQueueRegister)) ::System::Collections::Generic::HashSet_1<T>*  gQueueRegister;

/// @brief Field gSingleton, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gSingleton, put=setStaticF_gSingleton)) ::UnityW<T>  gSingleton;

 __declspec(property(get=get_photonView)) ::UnityW<::Photon::Pun::PhotonView>  photonView;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<T>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<T>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyList_1<T>"
constexpr operator  ::System::Collections::Generic::IReadOnlyList_1<T>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Method Awake, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::GTSystem_1<T>* New_ctor() ;

/// @brief Method OnApplicationQuit, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnApplicationQuit() ;

/// @brief Method OnRegister, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnRegister(T  instance) ;

/// @brief Method OnTick, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnTick(float_t  dt, T  instance) ;

/// @brief Method OnUnregister, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnUnregister(T  instance) ;

/// @brief Method Register, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void Register(T  instance) ;

/// @brief Method RegisterInstance, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool RegisterInstance(T  instance) ;

/// @brief Method SetSingleton, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void SetSingleton(::GlobalNamespace::GTSystem_1<T>*  system) ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.Generic.IReadOnlyCollection<T>.get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t System_Collections_Generic_IReadOnlyCollection_T__get_Count() ;

/// @brief Method System.Collections.Generic.IReadOnlyList<T>.get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline T System_Collections_Generic_IReadOnlyList_T__get_Item(int32_t  index) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Tick, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Tick() ;

/// @brief Method Unregister, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void Unregister(T  instance) ;

/// @brief Method UnregisterInstance, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool UnregisterInstance(T  instance) ;

constexpr ::System::Collections::Generic::List_1<T>* const& __cordl_internal_get__instances() const;

constexpr ::System::Collections::Generic::List_1<T>*& __cordl_internal_get__instances() ;

constexpr bool const& __cordl_internal_get__networked() const;

constexpr bool& __cordl_internal_get__networked() ;

constexpr ::UnityW<::Photon::Pun::PhotonView> const& __cordl_internal_get__photonView() const;

constexpr ::UnityW<::Photon::Pun::PhotonView>& __cordl_internal_get__photonView() ;

constexpr void __cordl_internal_set__instances(::System::Collections::Generic::List_1<T>*  value) ;

constexpr void __cordl_internal_set__networked(bool  value) ;

constexpr void __cordl_internal_set__photonView(::UnityW<::Photon::Pun::PhotonView>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF_gAppQuitting() ;

static inline bool getStaticF_gInitializing() ;

static inline ::System::Collections::Generic::HashSet_1<T>* getStaticF_gQueueRegister() ;

static inline ::UnityW<T> getStaticF_gSingleton() ;

/// @brief Method get_PhotonView, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::UnityW<::Photon::Pun::PhotonView> get_PhotonView() ;

/// @brief Method get_photonView, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::UnityW<::Photon::Pun::PhotonView> get_photonView() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr ::System::Collections::Generic::IEnumerable_1<T>* i___System__Collections__Generic__IEnumerable_1_T_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<T>* i___System__Collections__Generic__IReadOnlyCollection_1_T_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IReadOnlyList_1<T>"
constexpr ::System::Collections::Generic::IReadOnlyList_1<T>* i___System__Collections__Generic__IReadOnlyList_1_T_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

static inline void setStaticF_gAppQuitting(bool  value) ;

static inline void setStaticF_gInitializing(bool  value) ;

static inline void setStaticF_gQueueRegister(::System::Collections::Generic::HashSet_1<T>*  value) ;

static inline void setStaticF_gSingleton(::UnityW<T>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GTSystem_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GTSystem_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GTSystem_1(GTSystem_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GTSystem_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GTSystem_1(GTSystem_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2340};

/// [SerializeField]
/// @brief Field _instances, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<T>*  ____instances;

/// [SerializeField]
/// @brief Field _networked, offset: 0x28, size: 0x1, def value: None
 bool  ____networked;

/// [SerializeField]
/// @brief Field _photonView, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Photon::Pun::PhotonView>  ____photonView;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: false
// CS Name: GTSystem`1/<>c<T>
class CORDL_TYPE GTSystem_1___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::GTSystem_1___c<T>*  __9;

/// @brief Field <>9__25_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__25_0, put=setStaticF___9__25_0)) ::System::Func_2<T,bool>*  __9__25_0;

static inline ::GlobalNamespace::GTSystem_1___c<T>* New_ctor() ;

/// @brief Method <SetSingleton>b__25_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool _SetSingleton_b__25_0(T  x) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::GTSystem_1___c<T>* getStaticF___9() ;

static inline ::System::Func_2<T,bool>* getStaticF___9__25_0() ;

static inline void setStaticF___9(::GlobalNamespace::GTSystem_1___c<T>*  value) ;

static inline void setStaticF___9__25_0(::System::Func_2<T,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GTSystem_1___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GTSystem_1___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GTSystem_1___c(GTSystem_1___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GTSystem_1___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GTSystem_1___c(GTSystem_1___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2339};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
