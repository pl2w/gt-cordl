#pragma once
// IWYU pragma private; include "BuildSafe/Reflection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(Reflection)
namespace BuildSafe {
class Reflection___c;
}
namespace BuildSafe {
template<typename T>
class Reflection___c__9_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Reflection {
class Assembly;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class Type;
}
// Forward declare root types
namespace BuildSafe {
class Reflection;
}
namespace BuildSafe {
class Reflection___c;
}
namespace BuildSafe {
template<typename T>
class Reflection___c__9_1;
}
// Write type traits
MARK_REF_T(::BuildSafe::Reflection*);
MARK_REF_T(::BuildSafe::Reflection___c*);
MARK_GEN_REF_T_PTR(::BuildSafe::Reflection___c__9_1);
DEFINE_IL2CPP_CLASS(::BuildSafe::Reflection*, "BuildSafe", "Reflection");
DEFINE_IL2CPP_CLASS(::BuildSafe::Reflection___c*, "BuildSafe", "Reflection/<>c");
DEFINE_IL2CPP_GEN_CLASS_PTR(::BuildSafe::Reflection___c__9_1, "BuildSafe", "Reflection/<>c__9`1");
// Dependencies System.Attribute, System.Object, System.Reflection.Assembly, System.Type
namespace BuildSafe {
// Is value type: false
// CS Name: BuildSafe.Reflection
class CORDL_TYPE Reflection : public ::System::Object {
public:
// Declarations
using __c = ::BuildSafe::Reflection___c;

template<typename T>
using __c__9_1 = ::BuildSafe::Reflection___c__9_1<T>;

/// @brief Field gAssemblyCache, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gAssemblyCache, put=setStaticF_gAssemblyCache)) ::ArrayW<::System::Reflection::Assembly*>  gAssemblyCache;

/// @brief Field gTypeCache, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gTypeCache, put=setStaticF_gTypeCache)) ::ArrayW<::System::Type*>  gTypeCache;

/// @brief Method GetMethodsWithAttribute, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::System::Attribute*>)
static inline ::ArrayW<::System::Reflection::MethodInfo*> GetMethodsWithAttribute() ;

/// @brief Method PreFetchAllAssemblies, addr 0x5c4ecec, size 0x1c0, virtual false, abstract: false, final false
static inline ::ArrayW<::System::Reflection::Assembly*> PreFetchAllAssemblies() ;

/// @brief Method PreFetchAllTypes, addr 0x5c4eef8, size 0x26c, virtual false, abstract: false, final false
static inline ::ArrayW<::System::Type*> PreFetchAllTypes() ;

static inline ::ArrayW<::System::Reflection::Assembly*> getStaticF_gAssemblyCache() ;

static inline ::ArrayW<::System::Type*> getStaticF_gTypeCache() ;

/// @brief Method get_AllAssemblies, addr 0x5c4eca0, size 0x4c, virtual false, abstract: false, final false
static inline ::ArrayW<::System::Reflection::Assembly*> get_AllAssemblies() ;

/// @brief Method get_AllTypes, addr 0x5c4eeac, size 0x4c, virtual false, abstract: false, final false
static inline ::ArrayW<::System::Type*> get_AllTypes() ;

static inline void setStaticF_gAssemblyCache(::ArrayW<::System::Reflection::Assembly*>  value) ;

static inline void setStaticF_gTypeCache(::ArrayW<::System::Type*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Reflection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Reflection", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Reflection(Reflection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Reflection", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Reflection(Reflection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4256};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BuildSafe::Reflection) == 0x10, "Size mismatch!");

} // namespace end def BuildSafe
// [CompilerGenerated]
// Dependencies System.Object
namespace BuildSafe {
// cpp template
template<typename T>
// Is value type: false
// CS Name: BuildSafe.Reflection/<>c__9`1<T>
class CORDL_TYPE Reflection___c__9_1 : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::BuildSafe::Reflection___c__9_1<T>*  __9;

/// @brief Field <>9__9_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__9_0, put=setStaticF___9__9_0)) ::System::Func_2<::System::Type*,::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*>*  __9__9_0;

/// @brief Field <>9__9_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__9_1, put=setStaticF___9__9_1)) ::System::Func_2<::System::Reflection::MethodInfo*,bool>*  __9__9_1;

static inline ::BuildSafe::Reflection___c__9_1<T>* New_ctor() ;

/// @brief Method <GetMethodsWithAttribute>b__9_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>* _GetMethodsWithAttribute_b__9_0(::System::Type*  t) ;

/// @brief Method <GetMethodsWithAttribute>b__9_1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool _GetMethodsWithAttribute_b__9_1(::System::Reflection::MethodInfo*  m) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::BuildSafe::Reflection___c__9_1<T>* getStaticF___9() ;

static inline ::System::Func_2<::System::Type*,::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*>* getStaticF___9__9_0() ;

static inline ::System::Func_2<::System::Reflection::MethodInfo*,bool>* getStaticF___9__9_1() ;

static inline void setStaticF___9(::BuildSafe::Reflection___c__9_1<T>*  value) ;

static inline void setStaticF___9__9_0(::System::Func_2<::System::Type*,::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*>*  value) ;

static inline void setStaticF___9__9_1(::System::Func_2<::System::Reflection::MethodInfo*,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Reflection___c__9_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Reflection___c__9_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Reflection___c__9_1(Reflection___c__9_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Reflection___c__9_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Reflection___c__9_1(Reflection___c__9_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4255};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BuildSafe
// [CompilerGenerated]
// Dependencies System.Object
namespace BuildSafe {
// Is value type: false
// CS Name: BuildSafe.Reflection/<>c
class CORDL_TYPE Reflection___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::BuildSafe::Reflection___c*  __9;

/// @brief Field <>9__7_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__7_0, put=setStaticF___9__7_0)) ::System::Func_2<::System::Reflection::Assembly*,bool>*  __9__7_0;

/// @brief Field <>9__8_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__8_0, put=setStaticF___9__8_0)) ::System::Func_2<::System::Reflection::Assembly*,::System::Collections::Generic::IEnumerable_1<::System::Type*>*>*  __9__8_0;

/// @brief Field <>9__8_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__8_1, put=setStaticF___9__8_1)) ::System::Func_2<::System::Type*,bool>*  __9__8_1;

static inline ::BuildSafe::Reflection___c* New_ctor() ;

/// @brief Method <PreFetchAllAssemblies>b__7_0, addr 0x5c4f1e4, size 0x10, virtual false, abstract: false, final false
inline bool _PreFetchAllAssemblies_b__7_0(::System::Reflection::Assembly*  a) ;

/// @brief Method <PreFetchAllTypes>b__8_0, addr 0x5c4f1f4, size 0x24, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* _PreFetchAllTypes_b__8_0(::System::Reflection::Assembly*  a) ;

/// @brief Method <PreFetchAllTypes>b__8_1, addr 0x5c4f218, size 0x34, virtual false, abstract: false, final false
inline bool _PreFetchAllTypes_b__8_1(::System::Type*  t) ;

/// @brief Method .ctor, addr 0x5c4f1dc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::BuildSafe::Reflection___c* getStaticF___9() ;

static inline ::System::Func_2<::System::Reflection::Assembly*,bool>* getStaticF___9__7_0() ;

static inline ::System::Func_2<::System::Reflection::Assembly*,::System::Collections::Generic::IEnumerable_1<::System::Type*>*>* getStaticF___9__8_0() ;

static inline ::System::Func_2<::System::Type*,bool>* getStaticF___9__8_1() ;

static inline void setStaticF___9(::BuildSafe::Reflection___c*  value) ;

static inline void setStaticF___9__7_0(::System::Func_2<::System::Reflection::Assembly*,bool>*  value) ;

static inline void setStaticF___9__8_0(::System::Func_2<::System::Reflection::Assembly*,::System::Collections::Generic::IEnumerable_1<::System::Type*>*>*  value) ;

static inline void setStaticF___9__8_1(::System::Func_2<::System::Type*,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Reflection___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Reflection___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Reflection___c(Reflection___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Reflection___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Reflection___c(Reflection___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4254};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BuildSafe::Reflection___c) == 0x10, "Size mismatch!");

} // namespace end def BuildSafe
