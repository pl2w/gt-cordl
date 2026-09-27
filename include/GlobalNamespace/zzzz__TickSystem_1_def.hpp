#pragma once
// IWYU pragma private; include "GlobalNamespace/TickSystem_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(TickSystem_1)
namespace GlobalNamespace {
template<typename T>
class CallbackContainer_1;
}
namespace GlobalNamespace {
class ICallBack;
}
namespace GlobalNamespace {
class ITickSystemPost;
}
namespace GlobalNamespace {
class ITickSystemPre;
}
namespace GlobalNamespace {
class ITickSystemTick;
}
namespace GlobalNamespace {
class ITickSystem;
}
namespace GlobalNamespace {
template<typename T>
class TickSystem_1_TickCallbackWrapperPost;
}
namespace GlobalNamespace {
template<typename T>
class TickSystem_1_TickCallbackWrapperPre;
}
namespace GlobalNamespace {
template<typename T>
class TickSystem_1_TickCallbackWrapperTick;
}
namespace GlobalNamespace {
template<typename T,typename U>
class TickSystem_1_TickCallbackWrapper_1;
}
namespace GorillaTag {
class ObjectPoolEvents;
}
namespace GorillaTag {
template<typename T>
class ObjectPool_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class TickSystem_1;
}
namespace GlobalNamespace {
template<typename T>
class TickSystem_1_TickCallbackWrapperPost;
}
namespace GlobalNamespace {
template<typename T>
class TickSystem_1_TickCallbackWrapperPre;
}
namespace GlobalNamespace {
template<typename T>
class TickSystem_1_TickCallbackWrapperTick;
}
namespace GlobalNamespace {
template<typename T,typename U>
class TickSystem_1_TickCallbackWrapper_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::GlobalNamespace::TickSystem_1);
MARK_GEN_REF_T_PTR(::GlobalNamespace::TickSystem_1_TickCallbackWrapperPost);
MARK_GEN_REF_T_PTR(::GlobalNamespace::TickSystem_1_TickCallbackWrapperPre);
MARK_GEN_REF_T_PTR(::GlobalNamespace::TickSystem_1_TickCallbackWrapperTick);
MARK_GEN_REF_T_PTR(::GlobalNamespace::TickSystem_1_TickCallbackWrapper_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::TickSystem_1, "", "TickSystem`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::TickSystem_1_TickCallbackWrapperPost, "", "TickSystem`1/TickCallbackWrapperPost");
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::TickSystem_1_TickCallbackWrapperPre, "", "TickSystem`1/TickCallbackWrapperPre");
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::TickSystem_1_TickCallbackWrapperTick, "", "TickSystem`1/TickCallbackWrapperTick");
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::TickSystem_1_TickCallbackWrapper_1, "", "TickSystem`1/TickCallbackWrapper`1");
// [DefaultExecutionOrder(0)]
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: false
// CS Name: TickSystem`1<T>
class CORDL_TYPE TickSystem_1 : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using TickCallbackWrapperPost = ::GlobalNamespace::TickSystem_1_TickCallbackWrapperPost<T>;

using TickCallbackWrapperPre = ::GlobalNamespace::TickSystem_1_TickCallbackWrapperPre<T>;

using TickCallbackWrapperTick = ::GlobalNamespace::TickSystem_1_TickCallbackWrapperTick<T>;

template<typename U>
using TickCallbackWrapper_1 = ::GlobalNamespace::TickSystem_1_TickCallbackWrapper_1<T, U>;

/// @brief Field postTickCallbacks, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_postTickCallbacks, put=setStaticF_postTickCallbacks)) ::GlobalNamespace::CallbackContainer_1<::GlobalNamespace::TickSystem_1_TickCallbackWrapperPost<T>*>*  postTickCallbacks;

/// @brief Field postTickWrapperPool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_postTickWrapperPool, put=setStaticF_postTickWrapperPool)) ::GorillaTag::ObjectPool_1<::GlobalNamespace::TickSystem_1_TickCallbackWrapperPost<T>*>*  postTickWrapperPool;

/// @brief Field postTickWrapperTable, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_postTickWrapperTable, put=setStaticF_postTickWrapperTable)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ITickSystemPost*,::GlobalNamespace::TickSystem_1_TickCallbackWrapperPost<T>*>*  postTickWrapperTable;

/// @brief Field preTickCallbacks, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_preTickCallbacks, put=setStaticF_preTickCallbacks)) ::GlobalNamespace::CallbackContainer_1<::GlobalNamespace::TickSystem_1_TickCallbackWrapperPre<T>*>*  preTickCallbacks;

/// @brief Field preTickWrapperPool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_preTickWrapperPool, put=setStaticF_preTickWrapperPool)) ::GorillaTag::ObjectPool_1<::GlobalNamespace::TickSystem_1_TickCallbackWrapperPre<T>*>*  preTickWrapperPool;

/// @brief Field preTickWrapperTable, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_preTickWrapperTable, put=setStaticF_preTickWrapperTable)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ITickSystemPre*,::GlobalNamespace::TickSystem_1_TickCallbackWrapperPre<T>*>*  preTickWrapperTable;

/// @brief Field tickCallbacks, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_tickCallbacks, put=setStaticF_tickCallbacks)) ::GlobalNamespace::CallbackContainer_1<::GlobalNamespace::TickSystem_1_TickCallbackWrapperTick<T>*>*  tickCallbacks;

/// @brief Field tickWrapperPool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_tickWrapperPool, put=setStaticF_tickWrapperPool)) ::GorillaTag::ObjectPool_1<::GlobalNamespace::TickSystem_1_TickCallbackWrapperTick<T>*>*  tickWrapperPool;

/// @brief Field tickWrapperTable, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_tickWrapperTable, put=setStaticF_tickWrapperTable)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ITickSystemTick*,::GlobalNamespace::TickSystem_1_TickCallbackWrapperTick<T>*>*  tickWrapperTable;

/// @brief Method AddCallbackTarget, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void AddCallbackTarget(::System::Object*  target) ;

/// @brief Method AddPostTickCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void AddPostTickCallback(::GlobalNamespace::ITickSystemPost*  callback) ;

/// @brief Method AddPreTickCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void AddPreTickCallback(::GlobalNamespace::ITickSystemPre*  callback) ;

/// @brief Method AddTickCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void AddTickCallback(::GlobalNamespace::ITickSystemTick*  callback) ;

/// @brief Method AddTickSystemCallBack, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void AddTickSystemCallBack(::GlobalNamespace::ITickSystem*  callback) ;

/// @brief Method Awake, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method LateUpdate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::TickSystem_1<T>* New_ctor() ;

/// @brief Method OnEnterPlay, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void OnEnterPlay() ;

/// @brief Method RemoveCallbackTarget, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void RemoveCallbackTarget(::System::Object*  target) ;

/// @brief Method RemovePostTickCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void RemovePostTickCallback(::GlobalNamespace::ITickSystemPost*  callback) ;

/// @brief Method RemovePreTickCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void RemovePreTickCallback(::GlobalNamespace::ITickSystemPre*  callback) ;

/// @brief Method RemoveTickCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void RemoveTickCallback(::GlobalNamespace::ITickSystemTick*  callback) ;

/// @brief Method RemoveTickSystemCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void RemoveTickSystemCallback(::GlobalNamespace::ITickSystem*  callback) ;

/// @brief Method Update, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::CallbackContainer_1<::GlobalNamespace::TickSystem_1_TickCallbackWrapperPost<T>*>* getStaticF_postTickCallbacks() ;

static inline ::GorillaTag::ObjectPool_1<::GlobalNamespace::TickSystem_1_TickCallbackWrapperPost<T>*>* getStaticF_postTickWrapperPool() ;

static inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ITickSystemPost*,::GlobalNamespace::TickSystem_1_TickCallbackWrapperPost<T>*>* getStaticF_postTickWrapperTable() ;

static inline ::GlobalNamespace::CallbackContainer_1<::GlobalNamespace::TickSystem_1_TickCallbackWrapperPre<T>*>* getStaticF_preTickCallbacks() ;

static inline ::GorillaTag::ObjectPool_1<::GlobalNamespace::TickSystem_1_TickCallbackWrapperPre<T>*>* getStaticF_preTickWrapperPool() ;

static inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ITickSystemPre*,::GlobalNamespace::TickSystem_1_TickCallbackWrapperPre<T>*>* getStaticF_preTickWrapperTable() ;

static inline ::GlobalNamespace::CallbackContainer_1<::GlobalNamespace::TickSystem_1_TickCallbackWrapperTick<T>*>* getStaticF_tickCallbacks() ;

static inline ::GorillaTag::ObjectPool_1<::GlobalNamespace::TickSystem_1_TickCallbackWrapperTick<T>*>* getStaticF_tickWrapperPool() ;

static inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ITickSystemTick*,::GlobalNamespace::TickSystem_1_TickCallbackWrapperTick<T>*>* getStaticF_tickWrapperTable() ;

static inline void setStaticF_postTickCallbacks(::GlobalNamespace::CallbackContainer_1<::GlobalNamespace::TickSystem_1_TickCallbackWrapperPost<T>*>*  value) ;

static inline void setStaticF_postTickWrapperPool(::GorillaTag::ObjectPool_1<::GlobalNamespace::TickSystem_1_TickCallbackWrapperPost<T>*>*  value) ;

static inline void setStaticF_postTickWrapperTable(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ITickSystemPost*,::GlobalNamespace::TickSystem_1_TickCallbackWrapperPost<T>*>*  value) ;

static inline void setStaticF_preTickCallbacks(::GlobalNamespace::CallbackContainer_1<::GlobalNamespace::TickSystem_1_TickCallbackWrapperPre<T>*>*  value) ;

static inline void setStaticF_preTickWrapperPool(::GorillaTag::ObjectPool_1<::GlobalNamespace::TickSystem_1_TickCallbackWrapperPre<T>*>*  value) ;

static inline void setStaticF_preTickWrapperTable(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ITickSystemPre*,::GlobalNamespace::TickSystem_1_TickCallbackWrapperPre<T>*>*  value) ;

static inline void setStaticF_tickCallbacks(::GlobalNamespace::CallbackContainer_1<::GlobalNamespace::TickSystem_1_TickCallbackWrapperTick<T>*>*  value) ;

static inline void setStaticF_tickWrapperPool(::GorillaTag::ObjectPool_1<::GlobalNamespace::TickSystem_1_TickCallbackWrapperTick<T>*>*  value) ;

static inline void setStaticF_tickWrapperTable(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ITickSystemTick*,::GlobalNamespace::TickSystem_1_TickCallbackWrapperTick<T>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TickSystem_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TickSystem_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TickSystem_1(TickSystem_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TickSystem_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TickSystem_1(TickSystem_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3420};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Dependencies TickSystem`1::TickCallbackWrapper`1<T, U>
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: false
// CS Name: TickSystem`1/TickCallbackWrapperPost<T>
class CORDL_TYPE TickSystem_1_TickCallbackWrapperPost : public ::GlobalNamespace::TickSystem_1_TickCallbackWrapper_1<T,::GlobalNamespace::ITickSystemPost*> {
public:
// Declarations
/// @brief Method CallBack, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void CallBack() ;

static inline ::GlobalNamespace::TickSystem_1_TickCallbackWrapperPost<T>* New_ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TickSystem_1_TickCallbackWrapperPost() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TickSystem_1_TickCallbackWrapperPost", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TickSystem_1_TickCallbackWrapperPost(TickSystem_1_TickCallbackWrapperPost && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TickSystem_1_TickCallbackWrapperPost", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TickSystem_1_TickCallbackWrapperPost(TickSystem_1_TickCallbackWrapperPost const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3419};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Dependencies TickSystem`1::TickCallbackWrapper`1<T, U>
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: false
// CS Name: TickSystem`1/TickCallbackWrapperTick<T>
class CORDL_TYPE TickSystem_1_TickCallbackWrapperTick : public ::GlobalNamespace::TickSystem_1_TickCallbackWrapper_1<T,::GlobalNamespace::ITickSystemTick*> {
public:
// Declarations
/// @brief Method CallBack, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void CallBack() ;

static inline ::GlobalNamespace::TickSystem_1_TickCallbackWrapperTick<T>* New_ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TickSystem_1_TickCallbackWrapperTick() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TickSystem_1_TickCallbackWrapperTick", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TickSystem_1_TickCallbackWrapperTick(TickSystem_1_TickCallbackWrapperTick && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TickSystem_1_TickCallbackWrapperTick", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TickSystem_1_TickCallbackWrapperTick(TickSystem_1_TickCallbackWrapperTick const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3418};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Dependencies TickSystem`1::TickCallbackWrapper`1<T, U>
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: false
// CS Name: TickSystem`1/TickCallbackWrapperPre<T>
class CORDL_TYPE TickSystem_1_TickCallbackWrapperPre : public ::GlobalNamespace::TickSystem_1_TickCallbackWrapper_1<T,::GlobalNamespace::ITickSystemPre*> {
public:
// Declarations
/// @brief Method CallBack, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void CallBack() ;

static inline ::GlobalNamespace::TickSystem_1_TickCallbackWrapperPre<T>* New_ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TickSystem_1_TickCallbackWrapperPre() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TickSystem_1_TickCallbackWrapperPre", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TickSystem_1_TickCallbackWrapperPre(TickSystem_1_TickCallbackWrapperPre && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TickSystem_1_TickCallbackWrapperPre", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TickSystem_1_TickCallbackWrapperPre(TickSystem_1_TickCallbackWrapperPre const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3417};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template<typename T,typename U>
// Is value type: false
// CS Name: TickSystem`1/TickCallbackWrapper`1<T,U>
class CORDL_TYPE TickSystem_1_TickCallbackWrapper_1 : public ::System::Object {
public:
// Declarations
/// @brief Field m_target, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_target, put=__cordl_internal_set_m_target)) U  m_target;

 __declspec(property(get=get_target, put=set_target)) U  target;

/// @brief Convert operator to "::GlobalNamespace::ICallBack"
constexpr operator  ::GlobalNamespace::ICallBack*() noexcept;

/// @brief Convert operator to "::GorillaTag::ObjectPoolEvents"
constexpr operator  ::GorillaTag::ObjectPoolEvents*() noexcept;

/// @brief Method CallBack, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void CallBack() ;

static inline ::GlobalNamespace::TickSystem_1_TickCallbackWrapper_1<T,U>* New_ctor() ;

/// @brief Method OnReturned, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnReturned() ;

/// @brief Method OnTaken, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnTaken() ;

constexpr U const& __cordl_internal_get_m_target() const;

constexpr U& __cordl_internal_get_m_target() ;

constexpr void __cordl_internal_set_m_target(U  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_target, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline U get_target() ;

/// @brief Convert to "::GlobalNamespace::ICallBack"
constexpr ::GlobalNamespace::ICallBack* i___GlobalNamespace__ICallBack() noexcept;

/// @brief Convert to "::GorillaTag::ObjectPoolEvents"
constexpr ::GorillaTag::ObjectPoolEvents* i___GorillaTag__ObjectPoolEvents() noexcept;

/// @brief Method set_target, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_target(U  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TickSystem_1_TickCallbackWrapper_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TickSystem_1_TickCallbackWrapper_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TickSystem_1_TickCallbackWrapper_1(TickSystem_1_TickCallbackWrapper_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TickSystem_1_TickCallbackWrapper_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TickSystem_1_TickCallbackWrapper_1(TickSystem_1_TickCallbackWrapper_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3416};

/// @brief Field m_target, offset: 0x10, size: 0x8, def value: None
 U  ___m_target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
