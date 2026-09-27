#pragma once
// IWYU pragma private; include "GorillaTag/InAction_4.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(InAction_4)
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GorillaTag {
template<typename T1,typename T2,typename T3,typename T4>
class InAction_4;
}
// Write type traits
MARK_GEN_REF_T_PTR(::GorillaTag::InAction_4);
DEFINE_IL2CPP_GEN_CLASS_PTR(::GorillaTag::InAction_4, "GorillaTag", "InAction`4");
// Dependencies System.MulticastDelegate
namespace GorillaTag {
// cpp template
template<typename T1,typename T2,typename T3,typename T4>
// Is value type: false
// CS Name: GorillaTag.InAction`4<T1,T2,T3,T4>
class CORDL_TYPE InAction_4 : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(/* [IsReadOnly] */ ::by_ref<T1>  obj1, /* [IsReadOnly] */ ::by_ref<T2>  obj2, /* [IsReadOnly] */ ::by_ref<T3>  obj3, /* [IsReadOnly] */ ::by_ref<T4>  obj4, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void EndInvoke(/* [IsReadOnly] */ ::by_ref<T1>  obj1, /* [IsReadOnly] */ ::by_ref<T2>  obj2, /* [IsReadOnly] */ ::by_ref<T3>  obj3, /* [IsReadOnly] */ ::by_ref<T4>  obj4, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Invoke(/* [IsReadOnly] */ ::by_ref<T1>  obj1, /* [IsReadOnly] */ ::by_ref<T2>  obj2, /* [IsReadOnly] */ ::by_ref<T3>  obj3, /* [IsReadOnly] */ ::by_ref<T4>  obj4) ;

static inline ::GorillaTag::InAction_4<T1,T2,T3,T4>* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InAction_4() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InAction_4", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InAction_4(InAction_4 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InAction_4", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InAction_4(InAction_4 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4671};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GorillaTag
