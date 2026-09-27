#pragma once
// IWYU pragma private; include "Oculus/Interaction/ClassToValueDecorator_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/zzzz__ClassToClassDecorator_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ClassToValueDecorator_2)
namespace Oculus::Interaction {
template<typename InstanceT,typename DecorationT>
class ClassToValueDecorator_2_InternalDecorator;
}
namespace Oculus::Interaction {
template<typename InstanceT,typename DecorationT>
class ClassToValueDecorator_2_Wrapper;
}
namespace Oculus::Interaction {
template<typename InstanceT,typename DecorationT>
class ClassToValueDecorator_2___c;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace Oculus::Interaction {
template<typename InstanceT,typename DecorationT>
class ClassToValueDecorator_2;
}
namespace Oculus::Interaction {
template<typename InstanceT,typename DecorationT>
class ClassToValueDecorator_2_InternalDecorator;
}
namespace Oculus::Interaction {
template<typename InstanceT,typename DecorationT>
class ClassToValueDecorator_2_Wrapper;
}
namespace Oculus::Interaction {
template<typename InstanceT,typename DecorationT>
class ClassToValueDecorator_2___c;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Oculus::Interaction::ClassToValueDecorator_2);
MARK_GEN_REF_T_PTR(::Oculus::Interaction::ClassToValueDecorator_2_InternalDecorator);
MARK_GEN_REF_T_PTR(::Oculus::Interaction::ClassToValueDecorator_2_Wrapper);
MARK_GEN_REF_T_PTR(::Oculus::Interaction::ClassToValueDecorator_2___c);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Oculus::Interaction::ClassToValueDecorator_2, "Oculus.Interaction", "ClassToValueDecorator`2");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Oculus::Interaction::ClassToValueDecorator_2_InternalDecorator, "Oculus.Interaction", "ClassToValueDecorator`2/InternalDecorator");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Oculus::Interaction::ClassToValueDecorator_2_Wrapper, "Oculus.Interaction", "ClassToValueDecorator`2/Wrapper");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Oculus::Interaction::ClassToValueDecorator_2___c, "Oculus.Interaction", "ClassToValueDecorator`2/<>c");
// Dependencies System.Object
namespace Oculus::Interaction {
// cpp template
template<typename InstanceT,typename DecorationT>
// Is value type: false
// CS Name: Oculus.Interaction.ClassToValueDecorator`2<InstanceT,DecorationT>
class CORDL_TYPE ClassToValueDecorator_2 : public ::System::Object {
public:
// Declarations
using InternalDecorator = ::Oculus::Interaction::ClassToValueDecorator_2_InternalDecorator<InstanceT, DecorationT>;

using Wrapper = ::Oculus::Interaction::ClassToValueDecorator_2_Wrapper<InstanceT, DecorationT>;

using __c = ::Oculus::Interaction::ClassToValueDecorator_2___c<InstanceT, DecorationT>;

/// @brief Field _decorator, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__decorator, put=__cordl_internal_set__decorator)) ::Oculus::Interaction::ClassToValueDecorator_2_InternalDecorator<InstanceT,DecorationT>*  _decorator;

/// @brief Method AddDecoration, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void AddDecoration(InstanceT  instance, DecorationT  decoration) ;

/// @brief Method GetDecorationAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<DecorationT>* GetDecorationAsync(InstanceT  instance) ;

static inline ::Oculus::Interaction::ClassToValueDecorator_2<InstanceT,DecorationT>* New_ctor() ;

/// @brief Method RemoveDecoration, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void RemoveDecoration(InstanceT  instance) ;

/// @brief Method TryGetDecoration, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryGetDecoration(InstanceT  instance, ::by_ref<DecorationT>  decoration) ;

constexpr ::Oculus::Interaction::ClassToValueDecorator_2_InternalDecorator<InstanceT,DecorationT>* const& __cordl_internal_get__decorator() const;

constexpr ::Oculus::Interaction::ClassToValueDecorator_2_InternalDecorator<InstanceT,DecorationT>*& __cordl_internal_get__decorator() ;

constexpr void __cordl_internal_set__decorator(::Oculus::Interaction::ClassToValueDecorator_2_InternalDecorator<InstanceT,DecorationT>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ClassToValueDecorator_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ClassToValueDecorator_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ClassToValueDecorator_2(ClassToValueDecorator_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ClassToValueDecorator_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ClassToValueDecorator_2(ClassToValueDecorator_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16024};

/// @brief Field _decorator, offset: 0x10, size: 0x8, def value: None
 ::Oculus::Interaction::ClassToValueDecorator_2_InternalDecorator<InstanceT,DecorationT>*  ____decorator;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction {
// cpp template
template<typename InstanceT,typename DecorationT>
// Is value type: false
// CS Name: Oculus.Interaction.ClassToValueDecorator`2/<>c<InstanceT,DecorationT>
class CORDL_TYPE ClassToValueDecorator_2___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::ClassToValueDecorator_2___c<InstanceT,DecorationT>*  __9;

/// @brief Field <>9__7_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__7_0, put=setStaticF___9__7_0)) ::System::Func_2<::System::Threading::Tasks::Task_1<::Oculus::Interaction::ClassToValueDecorator_2_Wrapper<InstanceT,DecorationT>*>*,DecorationT>*  __9__7_0;

static inline ::Oculus::Interaction::ClassToValueDecorator_2___c<InstanceT,DecorationT>* New_ctor() ;

/// @brief Method <GetDecorationAsync>b__7_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline DecorationT _GetDecorationAsync_b__7_0(::System::Threading::Tasks::Task_1<::Oculus::Interaction::ClassToValueDecorator_2_Wrapper<InstanceT,DecorationT>*>*  wrapper) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::ClassToValueDecorator_2___c<InstanceT,DecorationT>* getStaticF___9() ;

static inline ::System::Func_2<::System::Threading::Tasks::Task_1<::Oculus::Interaction::ClassToValueDecorator_2_Wrapper<InstanceT,DecorationT>*>*,DecorationT>* getStaticF___9__7_0() ;

static inline void setStaticF___9(::Oculus::Interaction::ClassToValueDecorator_2___c<InstanceT,DecorationT>*  value) ;

static inline void setStaticF___9__7_0(::System::Func_2<::System::Threading::Tasks::Task_1<::Oculus::Interaction::ClassToValueDecorator_2_Wrapper<InstanceT,DecorationT>*>*,DecorationT>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ClassToValueDecorator_2___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ClassToValueDecorator_2___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ClassToValueDecorator_2___c(ClassToValueDecorator_2___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ClassToValueDecorator_2___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ClassToValueDecorator_2___c(ClassToValueDecorator_2___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16023};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction
// Dependencies Oculus.Interaction.ClassToClassDecorator`2<InstanceT, DecorationT>
namespace Oculus::Interaction {
// cpp template
template<typename InstanceT,typename DecorationT>
// Is value type: false
// CS Name: Oculus.Interaction.ClassToValueDecorator`2/InternalDecorator<InstanceT,DecorationT>
class CORDL_TYPE ClassToValueDecorator_2_InternalDecorator : public ::Oculus::Interaction::ClassToClassDecorator_2<InstanceT,::Oculus::Interaction::ClassToValueDecorator_2_Wrapper<InstanceT,DecorationT>*> {
public:
// Declarations
static inline ::Oculus::Interaction::ClassToValueDecorator_2_InternalDecorator<InstanceT,DecorationT>* New_ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ClassToValueDecorator_2_InternalDecorator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ClassToValueDecorator_2_InternalDecorator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ClassToValueDecorator_2_InternalDecorator(ClassToValueDecorator_2_InternalDecorator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ClassToValueDecorator_2_InternalDecorator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ClassToValueDecorator_2_InternalDecorator(ClassToValueDecorator_2_InternalDecorator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16022};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction
// Dependencies System.Object
namespace Oculus::Interaction {
// cpp template
template<typename InstanceT,typename DecorationT>
// Is value type: false
// CS Name: Oculus.Interaction.ClassToValueDecorator`2/Wrapper<InstanceT,DecorationT>
class CORDL_TYPE ClassToValueDecorator_2_Wrapper : public ::System::Object {
public:
// Declarations
/// @brief Field _decoration, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__decoration, put=__cordl_internal_set__decoration)) DecorationT  _decoration;

static inline ::Oculus::Interaction::ClassToValueDecorator_2_Wrapper<InstanceT,DecorationT>* New_ctor() ;

constexpr DecorationT const& __cordl_internal_get__decoration() const;

constexpr DecorationT& __cordl_internal_get__decoration() ;

constexpr void __cordl_internal_set__decoration(DecorationT  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ClassToValueDecorator_2_Wrapper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ClassToValueDecorator_2_Wrapper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ClassToValueDecorator_2_Wrapper(ClassToValueDecorator_2_Wrapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ClassToValueDecorator_2_Wrapper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ClassToValueDecorator_2_Wrapper(ClassToValueDecorator_2_Wrapper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16021};

/// @brief Field _decoration, offset: 0x10, size: 0x8, def value: None
 DecorationT  ____decoration;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction
