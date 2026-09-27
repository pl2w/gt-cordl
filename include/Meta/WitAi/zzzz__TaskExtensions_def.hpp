#pragma once
// IWYU pragma private; include "Meta/WitAi/TaskExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TaskExtensions)
namespace Meta::WitAi {
class TaskExtensions___c;
}
namespace Meta::WitAi {
class TaskExtensions___c__DisplayClass3_0;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Meta::WitAi {
class TaskExtensions;
}
namespace Meta::WitAi {
class TaskExtensions___c;
}
namespace Meta::WitAi {
class TaskExtensions___c__DisplayClass3_0;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::TaskExtensions*);
MARK_REF_T(::Meta::WitAi::TaskExtensions___c*);
MARK_REF_T(::Meta::WitAi::TaskExtensions___c__DisplayClass3_0*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TaskExtensions*, "Meta.WitAi", "TaskExtensions");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TaskExtensions___c*, "Meta.WitAi", "TaskExtensions/<>c");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TaskExtensions___c__DisplayClass3_0*, "Meta.WitAi", "TaskExtensions/<>c__DisplayClass3_0");
// [Extension]
// Dependencies System.Object
namespace Meta::WitAi {
// Is value type: false
// CS Name: Meta.WitAi.TaskExtensions
class CORDL_TYPE TaskExtensions : public ::System::Object {
public:
// Declarations
using __c = ::Meta::WitAi::TaskExtensions___c;

using __c__DisplayClass3_0 = ::Meta::WitAi::TaskExtensions___c__DisplayClass3_0;

/// [Extension]
/// @brief Method WhenLessThan, addr 0x9e3d090, size 0x70, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task* WhenLessThan(::System::Collections::Generic::ICollection_1<::System::Threading::Tasks::Task*>*  tasks, int32_t  max) ;

/// [Extension]
/// @brief Method WhenLessThan, addr 0x9e3d100, size 0x608, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task* WhenLessThan(::System::Collections::Generic::ICollection_1<::System::Threading::Tasks::Task*>*  tasks, int32_t  max, ::System::Threading::CancellationToken  cancellationToken) ;

/// [Extension]
/// @brief Method WrapErrors, addr 0x9e38934, size 0xf0, virtual false, abstract: false, final false
static inline void WrapErrors(::System::Threading::Tasks::Task*  task) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TaskExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TaskExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TaskExtensions(TaskExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TaskExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TaskExtensions(TaskExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30989};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::WitAi::TaskExtensions) == 0x10, "Size mismatch!");

} // namespace end def Meta::WitAi
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi {
// Is value type: false
// CS Name: Meta.WitAi.TaskExtensions/<>c__DisplayClass3_0
class CORDL_TYPE TaskExtensions___c__DisplayClass3_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>9__1, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__1, put=__cordl_internal_set___9__1)) ::System::Action_1<::System::Threading::Tasks::Task*>*  __9__1;

/// @brief Field completion, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_completion, put=__cordl_internal_set_completion)) ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  completion;

/// @brief Field max, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_max, put=__cordl_internal_set_max)) int32_t  max;

/// @brief Field running, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_running, put=__cordl_internal_set_running)) int32_t  running;

static inline ::Meta::WitAi::TaskExtensions___c__DisplayClass3_0* New_ctor() ;

/// @brief Method <WhenLessThan>b__0, addr 0x9e3d810, size 0x50, virtual false, abstract: false, final false
inline void _WhenLessThan_b__0() ;

/// @brief Method <WhenLessThan>b__1, addr 0x9e3d860, size 0xa0, virtual false, abstract: false, final false
inline void _WhenLessThan_b__1(::System::Threading::Tasks::Task*  t) ;

constexpr ::System::Action_1<::System::Threading::Tasks::Task*>* const& __cordl_internal_get___9__1() const;

constexpr ::System::Action_1<::System::Threading::Tasks::Task*>*& __cordl_internal_get___9__1() ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& __cordl_internal_get_completion() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& __cordl_internal_get_completion() ;

constexpr int32_t const& __cordl_internal_get_max() const;

constexpr int32_t& __cordl_internal_get_max() ;

constexpr int32_t const& __cordl_internal_get_running() const;

constexpr int32_t& __cordl_internal_get_running() ;

constexpr void __cordl_internal_set___9__1(::System::Action_1<::System::Threading::Tasks::Task*>*  value) ;

constexpr void __cordl_internal_set_completion(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value) ;

constexpr void __cordl_internal_set_max(int32_t  value) ;

constexpr void __cordl_internal_set_running(int32_t  value) ;

/// @brief Method .ctor, addr 0x9e3d708, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TaskExtensions___c__DisplayClass3_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TaskExtensions___c__DisplayClass3_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TaskExtensions___c__DisplayClass3_0(TaskExtensions___c__DisplayClass3_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TaskExtensions___c__DisplayClass3_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TaskExtensions___c__DisplayClass3_0(TaskExtensions___c__DisplayClass3_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30988};

/// @brief Field completion, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  ___completion;

/// @brief Field running, offset: 0x18, size: 0x4, def value: None
 int32_t  ___running;

/// @brief Field max, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___max;

/// @brief Field <>9__1, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::System::Threading::Tasks::Task*>*  _____9__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TaskExtensions___c__DisplayClass3_0, ___completion) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TaskExtensions___c__DisplayClass3_0, ___running) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TaskExtensions___c__DisplayClass3_0, ___max) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TaskExtensions___c__DisplayClass3_0, _____9__1) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TaskExtensions___c__DisplayClass3_0) == 0x28, "Size mismatch!");

} // namespace end def Meta::WitAi
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi {
// Is value type: false
// CS Name: Meta.WitAi.TaskExtensions/<>c
class CORDL_TYPE TaskExtensions___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Meta::WitAi::TaskExtensions___c*  __9;

/// @brief Field <>9__0_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__0_0, put=setStaticF___9__0_0)) ::System::Action_2<::System::Threading::Tasks::Task*,::System::Object*>*  __9__0_0;

static inline ::Meta::WitAi::TaskExtensions___c* New_ctor() ;

/// @brief Method <WrapErrors>b__0_0, addr 0x9e3d780, size 0x90, virtual false, abstract: false, final false
inline void _WrapErrors_b__0_0(::System::Threading::Tasks::Task*  t, ::System::Object*  state) ;

/// @brief Method .ctor, addr 0x9e3d778, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Meta::WitAi::TaskExtensions___c* getStaticF___9() ;

static inline ::System::Action_2<::System::Threading::Tasks::Task*,::System::Object*>* getStaticF___9__0_0() ;

static inline void setStaticF___9(::Meta::WitAi::TaskExtensions___c*  value) ;

static inline void setStaticF___9__0_0(::System::Action_2<::System::Threading::Tasks::Task*,::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TaskExtensions___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TaskExtensions___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TaskExtensions___c(TaskExtensions___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TaskExtensions___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TaskExtensions___c(TaskExtensions___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30987};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::WitAi::TaskExtensions___c) == 0x10, "Size mismatch!");

} // namespace end def Meta::WitAi
