#pragma once
// IWYU pragma private; include "System/Threading/Tasks/BeginEndAwaitableAdapter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/Tasks/zzzz__RendezvousAwaitable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BeginEndAwaitableAdapter)
namespace System::Threading::Tasks {
class BeginEndAwaitableAdapter___c;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
// Forward declare root types
namespace System::Threading::Tasks {
class BeginEndAwaitableAdapter;
}
namespace System::Threading::Tasks {
class BeginEndAwaitableAdapter___c;
}
// Write type traits
MARK_REF_T(::System::Threading::Tasks::BeginEndAwaitableAdapter*);
MARK_REF_T(::System::Threading::Tasks::BeginEndAwaitableAdapter___c*);
DEFINE_IL2CPP_CLASS(::System::Threading::Tasks::BeginEndAwaitableAdapter*, "System.Threading.Tasks", "BeginEndAwaitableAdapter");
DEFINE_IL2CPP_CLASS(::System::Threading::Tasks::BeginEndAwaitableAdapter___c*, "System.Threading.Tasks", "BeginEndAwaitableAdapter/<>c");
// Dependencies System.Threading.Tasks.RendezvousAwaitable`1<TResult>
namespace System::Threading::Tasks {
// Is value type: false
// CS Name: System.Threading.Tasks.BeginEndAwaitableAdapter
class CORDL_TYPE BeginEndAwaitableAdapter : public ::System::Threading::Tasks::RendezvousAwaitable_1<::System::IAsyncResult*> {
public:
// Declarations
using __c = ::System::Threading::Tasks::BeginEndAwaitableAdapter___c;

/// @brief Field Callback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Callback, put=setStaticF_Callback)) ::System::AsyncCallback*  Callback;

static inline ::System::Threading::Tasks::BeginEndAwaitableAdapter* New_ctor() ;

/// @brief Method .ctor, addr 0xa357b18, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::AsyncCallback* getStaticF_Callback() ;

static inline void setStaticF_Callback(::System::AsyncCallback*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BeginEndAwaitableAdapter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BeginEndAwaitableAdapter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BeginEndAwaitableAdapter(BeginEndAwaitableAdapter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BeginEndAwaitableAdapter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BeginEndAwaitableAdapter(BeginEndAwaitableAdapter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5900};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Threading::Tasks::BeginEndAwaitableAdapter) == 0x30, "Size mismatch!");

} // namespace end def System::Threading::Tasks
// [CompilerGenerated]
// Dependencies System.Object
namespace System::Threading::Tasks {
// Is value type: false
// CS Name: System.Threading.Tasks.BeginEndAwaitableAdapter/<>c
class CORDL_TYPE BeginEndAwaitableAdapter___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::System::Threading::Tasks::BeginEndAwaitableAdapter___c*  __9;

static inline ::System::Threading::Tasks::BeginEndAwaitableAdapter___c* New_ctor() ;

/// @brief Method <.cctor>b__2_0, addr 0xa357cd8, size 0xec, virtual false, abstract: false, final false
inline void __cctor_b__2_0(::System::IAsyncResult*  asyncResult) ;

/// @brief Method .ctor, addr 0xa357cd0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Threading::Tasks::BeginEndAwaitableAdapter___c* getStaticF___9() ;

static inline void setStaticF___9(::System::Threading::Tasks::BeginEndAwaitableAdapter___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BeginEndAwaitableAdapter___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BeginEndAwaitableAdapter___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BeginEndAwaitableAdapter___c(BeginEndAwaitableAdapter___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BeginEndAwaitableAdapter___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BeginEndAwaitableAdapter___c(BeginEndAwaitableAdapter___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5899};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Threading::Tasks::BeginEndAwaitableAdapter___c) == 0x10, "Size mismatch!");

} // namespace end def System::Threading::Tasks
