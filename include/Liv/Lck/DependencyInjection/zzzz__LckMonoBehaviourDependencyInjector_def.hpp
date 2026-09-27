#pragma once
// IWYU pragma private; include "Liv/Lck/DependencyInjection/LckMonoBehaviourDependencyInjector.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__BindingFlags_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LckMonoBehaviourDependencyInjector)
namespace Liv::Lck::DependencyInjection {
class LckMonoBehaviourDependencyInjector___c;
}
namespace Liv::Lck::DependencyInjection {
class LckServiceProvider;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Reflection {
class ParameterInfo;
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
class MonoBehaviour;
}
// Forward declare root types
namespace Liv::Lck::DependencyInjection {
class LckMonoBehaviourDependencyInjector;
}
namespace Liv::Lck::DependencyInjection {
class LckMonoBehaviourDependencyInjector___c;
}
// Write type traits
MARK_REF_T(::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector*);
MARK_REF_T(::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector___c*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector*, "Liv.Lck.DependencyInjection", "LckMonoBehaviourDependencyInjector");
DEFINE_IL2CPP_CLASS(::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector___c*, "Liv.Lck.DependencyInjection", "LckMonoBehaviourDependencyInjector/<>c");
// Dependencies System.Object, System.Reflection.BindingFlags
namespace Liv::Lck::DependencyInjection {
// Is value type: false
// CS Name: Liv.Lck.DependencyInjection.LckMonoBehaviourDependencyInjector
class CORDL_TYPE LckMonoBehaviourDependencyInjector : public ::System::Object {
public:
// Declarations
using __c = ::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector___c;

/// @brief Field _lckServiceProvider, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__lckServiceProvider, put=__cordl_internal_set__lckServiceProvider)) ::Liv::Lck::DependencyInjection::LckServiceProvider*  _lckServiceProvider;

/// @brief Method Inject, addr 0x9d33d84, size 0x974, virtual false, abstract: false, final false
inline void Inject(::UnityEngine::MonoBehaviour*  instance) ;

/// @brief Method IsInjectable, addr 0x9d356a4, size 0x1d4, virtual false, abstract: false, final false
static inline bool IsInjectable(::System::Object*  obj) ;

static inline ::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector* New_ctor(::Liv::Lck::DependencyInjection::LckServiceProvider*  lckServiceProvider) ;

constexpr ::Liv::Lck::DependencyInjection::LckServiceProvider* const& __cordl_internal_get__lckServiceProvider() const;

constexpr ::Liv::Lck::DependencyInjection::LckServiceProvider*& __cordl_internal_get__lckServiceProvider() ;

constexpr void __cordl_internal_set__lckServiceProvider(::Liv::Lck::DependencyInjection::LckServiceProvider*  value) ;

/// @brief Method .ctor, addr 0x9d35078, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::Liv::Lck::DependencyInjection::LckServiceProvider*  lckServiceProvider) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckMonoBehaviourDependencyInjector() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckMonoBehaviourDependencyInjector", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckMonoBehaviourDependencyInjector(LckMonoBehaviourDependencyInjector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckMonoBehaviourDependencyInjector", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckMonoBehaviourDependencyInjector(LckMonoBehaviourDependencyInjector const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24817};

/// @brief Field _bindingFlags value: I32(54)
static ::System::Reflection::BindingFlags const _bindingFlags;

/// @brief Field _lckServiceProvider, offset: 0x10, size: 0x8, def value: None
 ::Liv::Lck::DependencyInjection::LckServiceProvider*  ____lckServiceProvider;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector, ____lckServiceProvider) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector) == 0x18, "Size mismatch!");

} // namespace end def Liv::Lck::DependencyInjection
// [CompilerGenerated]
// Dependencies System.Object
namespace Liv::Lck::DependencyInjection {
// Is value type: false
// CS Name: Liv.Lck.DependencyInjection.LckMonoBehaviourDependencyInjector/<>c
class CORDL_TYPE LckMonoBehaviourDependencyInjector___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector___c*  __9;

/// @brief Field <>9__3_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__3_0, put=setStaticF___9__3_0)) ::System::Func_2<::System::Reflection::MethodInfo*,bool>*  __9__3_0;

/// @brief Field <>9__3_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__3_1, put=setStaticF___9__3_1)) ::System::Func_2<::System::Reflection::ParameterInfo*,::System::Type*>*  __9__3_1;

/// @brief Field <>9__4_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__4_0, put=setStaticF___9__4_0)) ::System::Func_2<::System::Reflection::MemberInfo*,bool>*  __9__4_0;

static inline ::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector___c* New_ctor() ;

/// @brief Method <Inject>b__3_0, addr 0x9d35a34, size 0x74, virtual false, abstract: false, final false
inline bool _Inject_b__3_0(::System::Reflection::MethodInfo*  member) ;

/// @brief Method <Inject>b__3_1, addr 0x9d35aa8, size 0x20, virtual false, abstract: false, final false
inline ::System::Type* _Inject_b__3_1(::System::Reflection::ParameterInfo*  parameter) ;

/// @brief Method <IsInjectable>b__4_0, addr 0x9d35ac8, size 0x74, virtual false, abstract: false, final false
inline bool _IsInjectable_b__4_0(::System::Reflection::MemberInfo*  member) ;

/// @brief Method .ctor, addr 0x9d35a2c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector___c* getStaticF___9() ;

static inline ::System::Func_2<::System::Reflection::MethodInfo*,bool>* getStaticF___9__3_0() ;

static inline ::System::Func_2<::System::Reflection::ParameterInfo*,::System::Type*>* getStaticF___9__3_1() ;

static inline ::System::Func_2<::System::Reflection::MemberInfo*,bool>* getStaticF___9__4_0() ;

static inline void setStaticF___9(::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector___c*  value) ;

static inline void setStaticF___9__3_0(::System::Func_2<::System::Reflection::MethodInfo*,bool>*  value) ;

static inline void setStaticF___9__3_1(::System::Func_2<::System::Reflection::ParameterInfo*,::System::Type*>*  value) ;

static inline void setStaticF___9__4_0(::System::Func_2<::System::Reflection::MemberInfo*,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckMonoBehaviourDependencyInjector___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckMonoBehaviourDependencyInjector___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckMonoBehaviourDependencyInjector___c(LckMonoBehaviourDependencyInjector___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckMonoBehaviourDependencyInjector___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckMonoBehaviourDependencyInjector___c(LckMonoBehaviourDependencyInjector___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24816};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector___c) == 0x10, "Size mismatch!");

} // namespace end def Liv::Lck::DependencyInjection
