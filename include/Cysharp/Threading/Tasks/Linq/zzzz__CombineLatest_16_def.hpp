#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/CombineLatest_16.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/zzzz__MoveNextSource_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask`1_Awaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CombineLatest_16)
namespace Cysharp::Threading::Tasks::Linq {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13,typename T14,typename T15,typename TResult>
class CombineLatest_16__CombineLatest;
}
namespace Cysharp::Threading::Tasks {
class IUniTaskAsyncDisposable;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class IUniTaskAsyncEnumerable_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class IUniTaskAsyncEnumerator_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace GlobalNamespace {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13,typename T14,typename T15,typename TResult>
struct _CombineLatest_CombineLatest_16__DisposeAsync_d__131;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13,typename T14,typename T15,typename TResult>
class Func_16;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Linq {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13,typename T14,typename T15,typename TResult>
class CombineLatest_16;
}
namespace Cysharp::Threading::Tasks::Linq {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13,typename T14,typename T15,typename TResult>
class CombineLatest_16__CombineLatest;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Linq::CombineLatest_16);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Linq::CombineLatest_16__CombineLatest);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Linq::CombineLatest_16, "Cysharp.Threading.Tasks.Linq", "CombineLatest`16");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Linq::CombineLatest_16__CombineLatest, "Cysharp.Threading.Tasks.Linq", "CombineLatest`16/_CombineLatest");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::Linq {
// cpp template
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13,typename T14,typename T15,typename TResult>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.CombineLatest`16<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15,TResult>
class CORDL_TYPE CombineLatest_16 : public ::System::Object {
public:
// Declarations
using _CombineLatest = ::Cysharp::Threading::Tasks::Linq::CombineLatest_16__CombineLatest<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, TResult>;

/// @brief Field resultSelector, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_resultSelector, put=__cordl_internal_set_resultSelector)) ::System::Func_16<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15,TResult>*  resultSelector;

/// @brief Field source1, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_source1, put=__cordl_internal_set_source1)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T1>*  source1;

/// @brief Field source10, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_source10, put=__cordl_internal_set_source10)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T10>*  source10;

/// @brief Field source11, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_source11, put=__cordl_internal_set_source11)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T11>*  source11;

/// @brief Field source12, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_source12, put=__cordl_internal_set_source12)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T12>*  source12;

/// @brief Field source13, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_source13, put=__cordl_internal_set_source13)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T13>*  source13;

/// @brief Field source14, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_source14, put=__cordl_internal_set_source14)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T14>*  source14;

/// @brief Field source15, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_source15, put=__cordl_internal_set_source15)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T15>*  source15;

/// @brief Field source2, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_source2, put=__cordl_internal_set_source2)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T2>*  source2;

/// @brief Field source3, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_source3, put=__cordl_internal_set_source3)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T3>*  source3;

/// @brief Field source4, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_source4, put=__cordl_internal_set_source4)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T4>*  source4;

/// @brief Field source5, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_source5, put=__cordl_internal_set_source5)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T5>*  source5;

/// @brief Field source6, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_source6, put=__cordl_internal_set_source6)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T6>*  source6;

/// @brief Field source7, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_source7, put=__cordl_internal_set_source7)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T7>*  source7;

/// @brief Field source8, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_source8, put=__cordl_internal_set_source8)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T8>*  source8;

/// @brief Field source9, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_source9, put=__cordl_internal_set_source9)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T9>*  source9;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*() noexcept;

/// @brief Method GetAsyncEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>* GetAsyncEnumerator(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Linq::CombineLatest_16<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15,TResult>* New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T1>*  source1, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T2>*  source2, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T3>*  source3, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T4>*  source4, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T5>*  source5, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T6>*  source6, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T7>*  source7, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T8>*  source8, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T9>*  source9, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T10>*  source10, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T11>*  source11, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T12>*  source12, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T13>*  source13, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T14>*  source14, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T15>*  source15, ::System::Func_16<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15,TResult>*  resultSelector) ;

constexpr ::System::Func_16<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15,TResult>* const& __cordl_internal_get_resultSelector() const;

constexpr ::System::Func_16<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15,TResult>*& __cordl_internal_get_resultSelector() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T1>* const& __cordl_internal_get_source1() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T1>*& __cordl_internal_get_source1() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T10>* const& __cordl_internal_get_source10() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T10>*& __cordl_internal_get_source10() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T11>* const& __cordl_internal_get_source11() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T11>*& __cordl_internal_get_source11() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T12>* const& __cordl_internal_get_source12() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T12>*& __cordl_internal_get_source12() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T13>* const& __cordl_internal_get_source13() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T13>*& __cordl_internal_get_source13() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T14>* const& __cordl_internal_get_source14() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T14>*& __cordl_internal_get_source14() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T15>* const& __cordl_internal_get_source15() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T15>*& __cordl_internal_get_source15() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T2>* const& __cordl_internal_get_source2() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T2>*& __cordl_internal_get_source2() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T3>* const& __cordl_internal_get_source3() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T3>*& __cordl_internal_get_source3() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T4>* const& __cordl_internal_get_source4() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T4>*& __cordl_internal_get_source4() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T5>* const& __cordl_internal_get_source5() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T5>*& __cordl_internal_get_source5() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T6>* const& __cordl_internal_get_source6() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T6>*& __cordl_internal_get_source6() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T7>* const& __cordl_internal_get_source7() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T7>*& __cordl_internal_get_source7() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T8>* const& __cordl_internal_get_source8() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T8>*& __cordl_internal_get_source8() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T9>* const& __cordl_internal_get_source9() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T9>*& __cordl_internal_get_source9() ;

constexpr void __cordl_internal_set_resultSelector(::System::Func_16<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15,TResult>*  value) ;

constexpr void __cordl_internal_set_source1(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T1>*  value) ;

constexpr void __cordl_internal_set_source10(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T10>*  value) ;

constexpr void __cordl_internal_set_source11(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T11>*  value) ;

constexpr void __cordl_internal_set_source12(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T12>*  value) ;

constexpr void __cordl_internal_set_source13(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T13>*  value) ;

constexpr void __cordl_internal_set_source14(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T14>*  value) ;

constexpr void __cordl_internal_set_source15(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T15>*  value) ;

constexpr void __cordl_internal_set_source2(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T2>*  value) ;

constexpr void __cordl_internal_set_source3(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T3>*  value) ;

constexpr void __cordl_internal_set_source4(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T4>*  value) ;

constexpr void __cordl_internal_set_source5(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T5>*  value) ;

constexpr void __cordl_internal_set_source6(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T6>*  value) ;

constexpr void __cordl_internal_set_source7(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T7>*  value) ;

constexpr void __cordl_internal_set_source8(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T8>*  value) ;

constexpr void __cordl_internal_set_source9(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T9>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T1>*  source1, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T2>*  source2, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T3>*  source3, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T4>*  source4, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T5>*  source5, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T6>*  source6, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T7>*  source7, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T8>*  source8, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T9>*  source9, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T10>*  source10, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T11>*  source11, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T12>*  source12, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T13>*  source13, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T14>*  source14, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T15>*  source15, ::System::Func_16<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15,TResult>*  resultSelector) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>* i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1_TResult_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CombineLatest_16() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CombineLatest_16", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CombineLatest_16(CombineLatest_16 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CombineLatest_16", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CombineLatest_16(CombineLatest_16 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20492};

/// @brief Field source1, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T1>*  ___source1;

/// @brief Field source2, offset: 0x18, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T2>*  ___source2;

/// @brief Field source3, offset: 0x20, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T3>*  ___source3;

/// @brief Field source4, offset: 0x28, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T4>*  ___source4;

/// @brief Field source5, offset: 0x30, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T5>*  ___source5;

/// @brief Field source6, offset: 0x38, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T6>*  ___source6;

/// @brief Field source7, offset: 0x40, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T7>*  ___source7;

/// @brief Field source8, offset: 0x48, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T8>*  ___source8;

/// @brief Field source9, offset: 0x50, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T9>*  ___source9;

/// @brief Field source10, offset: 0x58, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T10>*  ___source10;

/// @brief Field source11, offset: 0x60, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T11>*  ___source11;

/// @brief Field source12, offset: 0x68, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T12>*  ___source12;

/// @brief Field source13, offset: 0x70, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T13>*  ___source13;

/// @brief Field source14, offset: 0x78, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T14>*  ___source14;

/// @brief Field source15, offset: 0x80, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T15>*  ___source15;

/// @brief Field resultSelector, offset: 0x88, size: 0x8, def value: None
 ::System::Func_16<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15,TResult>*  ___resultSelector;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Linq
// Dependencies Cysharp.Threading.Tasks.MoveNextSource, Cysharp.Threading.Tasks.UniTask`1::Awaiter<T>, System.Threading.CancellationToken
namespace Cysharp::Threading::Tasks::Linq {
// cpp template
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13,typename T14,typename T15,typename TResult>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.CombineLatest`16/_CombineLatest<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15,TResult>
class CORDL_TYPE CombineLatest_16__CombineLatest : public ::Cysharp::Threading::Tasks::MoveNextSource {
public:
// Declarations
using _DisposeAsync_d__131 = ::GlobalNamespace::_CombineLatest_CombineLatest_16__DisposeAsync_d__131<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, TResult>;

/// @brief Field Completed10Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Completed10Delegate, put=setStaticF_Completed10Delegate)) ::System::Action_1<::System::Object*>*  Completed10Delegate;

/// @brief Field Completed11Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Completed11Delegate, put=setStaticF_Completed11Delegate)) ::System::Action_1<::System::Object*>*  Completed11Delegate;

/// @brief Field Completed12Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Completed12Delegate, put=setStaticF_Completed12Delegate)) ::System::Action_1<::System::Object*>*  Completed12Delegate;

/// @brief Field Completed13Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Completed13Delegate, put=setStaticF_Completed13Delegate)) ::System::Action_1<::System::Object*>*  Completed13Delegate;

/// @brief Field Completed14Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Completed14Delegate, put=setStaticF_Completed14Delegate)) ::System::Action_1<::System::Object*>*  Completed14Delegate;

/// @brief Field Completed15Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Completed15Delegate, put=setStaticF_Completed15Delegate)) ::System::Action_1<::System::Object*>*  Completed15Delegate;

/// @brief Field Completed1Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Completed1Delegate, put=setStaticF_Completed1Delegate)) ::System::Action_1<::System::Object*>*  Completed1Delegate;

/// @brief Field Completed2Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Completed2Delegate, put=setStaticF_Completed2Delegate)) ::System::Action_1<::System::Object*>*  Completed2Delegate;

/// @brief Field Completed3Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Completed3Delegate, put=setStaticF_Completed3Delegate)) ::System::Action_1<::System::Object*>*  Completed3Delegate;

/// @brief Field Completed4Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Completed4Delegate, put=setStaticF_Completed4Delegate)) ::System::Action_1<::System::Object*>*  Completed4Delegate;

/// @brief Field Completed5Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Completed5Delegate, put=setStaticF_Completed5Delegate)) ::System::Action_1<::System::Object*>*  Completed5Delegate;

/// @brief Field Completed6Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Completed6Delegate, put=setStaticF_Completed6Delegate)) ::System::Action_1<::System::Object*>*  Completed6Delegate;

/// @brief Field Completed7Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Completed7Delegate, put=setStaticF_Completed7Delegate)) ::System::Action_1<::System::Object*>*  Completed7Delegate;

/// @brief Field Completed8Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Completed8Delegate, put=setStaticF_Completed8Delegate)) ::System::Action_1<::System::Object*>*  Completed8Delegate;

/// @brief Field Completed9Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Completed9Delegate, put=setStaticF_Completed9Delegate)) ::System::Action_1<::System::Object*>*  Completed9Delegate;

 __declspec(property(get=get_Current)) TResult  Current;

/// @brief Field awaiter1, offset 0xc8, size 0x18 
 __declspec(property(get=__cordl_internal_get_awaiter1, put=__cordl_internal_set_awaiter1)) ::GlobalNamespace::UniTask_1_Awaiter<bool>  awaiter1;

/// @brief Field awaiter10, offset 0x278, size 0x18 
 __declspec(property(get=__cordl_internal_get_awaiter10, put=__cordl_internal_set_awaiter10)) ::GlobalNamespace::UniTask_1_Awaiter<bool>  awaiter10;

/// @brief Field awaiter11, offset 0x2a8, size 0x18 
 __declspec(property(get=__cordl_internal_get_awaiter11, put=__cordl_internal_set_awaiter11)) ::GlobalNamespace::UniTask_1_Awaiter<bool>  awaiter11;

/// @brief Field awaiter12, offset 0x2d8, size 0x18 
 __declspec(property(get=__cordl_internal_get_awaiter12, put=__cordl_internal_set_awaiter12)) ::GlobalNamespace::UniTask_1_Awaiter<bool>  awaiter12;

/// @brief Field awaiter13, offset 0x308, size 0x18 
 __declspec(property(get=__cordl_internal_get_awaiter13, put=__cordl_internal_set_awaiter13)) ::GlobalNamespace::UniTask_1_Awaiter<bool>  awaiter13;

/// @brief Field awaiter14, offset 0x338, size 0x18 
 __declspec(property(get=__cordl_internal_get_awaiter14, put=__cordl_internal_set_awaiter14)) ::GlobalNamespace::UniTask_1_Awaiter<bool>  awaiter14;

/// @brief Field awaiter15, offset 0x368, size 0x18 
 __declspec(property(get=__cordl_internal_get_awaiter15, put=__cordl_internal_set_awaiter15)) ::GlobalNamespace::UniTask_1_Awaiter<bool>  awaiter15;

/// @brief Field awaiter2, offset 0xf8, size 0x18 
 __declspec(property(get=__cordl_internal_get_awaiter2, put=__cordl_internal_set_awaiter2)) ::GlobalNamespace::UniTask_1_Awaiter<bool>  awaiter2;

/// @brief Field awaiter3, offset 0x128, size 0x18 
 __declspec(property(get=__cordl_internal_get_awaiter3, put=__cordl_internal_set_awaiter3)) ::GlobalNamespace::UniTask_1_Awaiter<bool>  awaiter3;

/// @brief Field awaiter4, offset 0x158, size 0x18 
 __declspec(property(get=__cordl_internal_get_awaiter4, put=__cordl_internal_set_awaiter4)) ::GlobalNamespace::UniTask_1_Awaiter<bool>  awaiter4;

/// @brief Field awaiter5, offset 0x188, size 0x18 
 __declspec(property(get=__cordl_internal_get_awaiter5, put=__cordl_internal_set_awaiter5)) ::GlobalNamespace::UniTask_1_Awaiter<bool>  awaiter5;

/// @brief Field awaiter6, offset 0x1b8, size 0x18 
 __declspec(property(get=__cordl_internal_get_awaiter6, put=__cordl_internal_set_awaiter6)) ::GlobalNamespace::UniTask_1_Awaiter<bool>  awaiter6;

/// @brief Field awaiter7, offset 0x1e8, size 0x18 
 __declspec(property(get=__cordl_internal_get_awaiter7, put=__cordl_internal_set_awaiter7)) ::GlobalNamespace::UniTask_1_Awaiter<bool>  awaiter7;

/// @brief Field awaiter8, offset 0x218, size 0x18 
 __declspec(property(get=__cordl_internal_get_awaiter8, put=__cordl_internal_set_awaiter8)) ::GlobalNamespace::UniTask_1_Awaiter<bool>  awaiter8;

/// @brief Field awaiter9, offset 0x248, size 0x18 
 __declspec(property(get=__cordl_internal_get_awaiter9, put=__cordl_internal_set_awaiter9)) ::GlobalNamespace::UniTask_1_Awaiter<bool>  awaiter9;

/// @brief Field cancellationToken, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field completedCount, offset 0x390, size 0x4 
 __declspec(property(get=__cordl_internal_get_completedCount, put=__cordl_internal_set_completedCount)) int32_t  completedCount;

/// @brief Field current1, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_current1, put=__cordl_internal_set_current1)) T1  current1;

/// @brief Field current10, offset 0x298, size 0x8 
 __declspec(property(get=__cordl_internal_get_current10, put=__cordl_internal_set_current10)) T10  current10;

/// @brief Field current11, offset 0x2c8, size 0x8 
 __declspec(property(get=__cordl_internal_get_current11, put=__cordl_internal_set_current11)) T11  current11;

/// @brief Field current12, offset 0x2f8, size 0x8 
 __declspec(property(get=__cordl_internal_get_current12, put=__cordl_internal_set_current12)) T12  current12;

/// @brief Field current13, offset 0x328, size 0x8 
 __declspec(property(get=__cordl_internal_get_current13, put=__cordl_internal_set_current13)) T13  current13;

/// @brief Field current14, offset 0x358, size 0x8 
 __declspec(property(get=__cordl_internal_get_current14, put=__cordl_internal_set_current14)) T14  current14;

/// @brief Field current15, offset 0x388, size 0x8 
 __declspec(property(get=__cordl_internal_get_current15, put=__cordl_internal_set_current15)) T15  current15;

/// @brief Field current2, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_current2, put=__cordl_internal_set_current2)) T2  current2;

/// @brief Field current3, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get_current3, put=__cordl_internal_set_current3)) T3  current3;

/// @brief Field current4, offset 0x178, size 0x8 
 __declspec(property(get=__cordl_internal_get_current4, put=__cordl_internal_set_current4)) T4  current4;

/// @brief Field current5, offset 0x1a8, size 0x8 
 __declspec(property(get=__cordl_internal_get_current5, put=__cordl_internal_set_current5)) T5  current5;

/// @brief Field current6, offset 0x1d8, size 0x8 
 __declspec(property(get=__cordl_internal_get_current6, put=__cordl_internal_set_current6)) T6  current6;

/// @brief Field current7, offset 0x208, size 0x8 
 __declspec(property(get=__cordl_internal_get_current7, put=__cordl_internal_set_current7)) T7  current7;

/// @brief Field current8, offset 0x238, size 0x8 
 __declspec(property(get=__cordl_internal_get_current8, put=__cordl_internal_set_current8)) T8  current8;

/// @brief Field current9, offset 0x268, size 0x8 
 __declspec(property(get=__cordl_internal_get_current9, put=__cordl_internal_set_current9)) T9  current9;

/// @brief Field enumerator1, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_enumerator1, put=__cordl_internal_set_enumerator1)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T1>*  enumerator1;

/// @brief Field enumerator10, offset 0x270, size 0x8 
 __declspec(property(get=__cordl_internal_get_enumerator10, put=__cordl_internal_set_enumerator10)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T10>*  enumerator10;

/// @brief Field enumerator11, offset 0x2a0, size 0x8 
 __declspec(property(get=__cordl_internal_get_enumerator11, put=__cordl_internal_set_enumerator11)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T11>*  enumerator11;

/// @brief Field enumerator12, offset 0x2d0, size 0x8 
 __declspec(property(get=__cordl_internal_get_enumerator12, put=__cordl_internal_set_enumerator12)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T12>*  enumerator12;

/// @brief Field enumerator13, offset 0x300, size 0x8 
 __declspec(property(get=__cordl_internal_get_enumerator13, put=__cordl_internal_set_enumerator13)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T13>*  enumerator13;

/// @brief Field enumerator14, offset 0x330, size 0x8 
 __declspec(property(get=__cordl_internal_get_enumerator14, put=__cordl_internal_set_enumerator14)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T14>*  enumerator14;

/// @brief Field enumerator15, offset 0x360, size 0x8 
 __declspec(property(get=__cordl_internal_get_enumerator15, put=__cordl_internal_set_enumerator15)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T15>*  enumerator15;

/// @brief Field enumerator2, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_enumerator2, put=__cordl_internal_set_enumerator2)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T2>*  enumerator2;

/// @brief Field enumerator3, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_enumerator3, put=__cordl_internal_set_enumerator3)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T3>*  enumerator3;

/// @brief Field enumerator4, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get_enumerator4, put=__cordl_internal_set_enumerator4)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T4>*  enumerator4;

/// @brief Field enumerator5, offset 0x180, size 0x8 
 __declspec(property(get=__cordl_internal_get_enumerator5, put=__cordl_internal_set_enumerator5)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T5>*  enumerator5;

/// @brief Field enumerator6, offset 0x1b0, size 0x8 
 __declspec(property(get=__cordl_internal_get_enumerator6, put=__cordl_internal_set_enumerator6)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T6>*  enumerator6;

/// @brief Field enumerator7, offset 0x1e0, size 0x8 
 __declspec(property(get=__cordl_internal_get_enumerator7, put=__cordl_internal_set_enumerator7)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T7>*  enumerator7;

/// @brief Field enumerator8, offset 0x210, size 0x8 
 __declspec(property(get=__cordl_internal_get_enumerator8, put=__cordl_internal_set_enumerator8)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T8>*  enumerator8;

/// @brief Field enumerator9, offset 0x240, size 0x8 
 __declspec(property(get=__cordl_internal_get_enumerator9, put=__cordl_internal_set_enumerator9)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T9>*  enumerator9;

/// @brief Field hasCurrent1, offset 0xe0, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasCurrent1, put=__cordl_internal_set_hasCurrent1)) bool  hasCurrent1;

/// @brief Field hasCurrent10, offset 0x290, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasCurrent10, put=__cordl_internal_set_hasCurrent10)) bool  hasCurrent10;

/// @brief Field hasCurrent11, offset 0x2c0, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasCurrent11, put=__cordl_internal_set_hasCurrent11)) bool  hasCurrent11;

/// @brief Field hasCurrent12, offset 0x2f0, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasCurrent12, put=__cordl_internal_set_hasCurrent12)) bool  hasCurrent12;

/// @brief Field hasCurrent13, offset 0x320, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasCurrent13, put=__cordl_internal_set_hasCurrent13)) bool  hasCurrent13;

/// @brief Field hasCurrent14, offset 0x350, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasCurrent14, put=__cordl_internal_set_hasCurrent14)) bool  hasCurrent14;

/// @brief Field hasCurrent15, offset 0x380, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasCurrent15, put=__cordl_internal_set_hasCurrent15)) bool  hasCurrent15;

/// @brief Field hasCurrent2, offset 0x110, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasCurrent2, put=__cordl_internal_set_hasCurrent2)) bool  hasCurrent2;

/// @brief Field hasCurrent3, offset 0x140, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasCurrent3, put=__cordl_internal_set_hasCurrent3)) bool  hasCurrent3;

/// @brief Field hasCurrent4, offset 0x170, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasCurrent4, put=__cordl_internal_set_hasCurrent4)) bool  hasCurrent4;

/// @brief Field hasCurrent5, offset 0x1a0, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasCurrent5, put=__cordl_internal_set_hasCurrent5)) bool  hasCurrent5;

/// @brief Field hasCurrent6, offset 0x1d0, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasCurrent6, put=__cordl_internal_set_hasCurrent6)) bool  hasCurrent6;

/// @brief Field hasCurrent7, offset 0x200, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasCurrent7, put=__cordl_internal_set_hasCurrent7)) bool  hasCurrent7;

/// @brief Field hasCurrent8, offset 0x230, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasCurrent8, put=__cordl_internal_set_hasCurrent8)) bool  hasCurrent8;

/// @brief Field hasCurrent9, offset 0x260, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasCurrent9, put=__cordl_internal_set_hasCurrent9)) bool  hasCurrent9;

/// @brief Field result, offset 0x398, size 0x8 
 __declspec(property(get=__cordl_internal_get_result, put=__cordl_internal_set_result)) TResult  result;

/// @brief Field resultSelector, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_resultSelector, put=__cordl_internal_set_resultSelector)) ::System::Func_16<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15,TResult>*  resultSelector;

/// @brief Field running1, offset 0xe1, size 0x1 
 __declspec(property(get=__cordl_internal_get_running1, put=__cordl_internal_set_running1)) bool  running1;

/// @brief Field running10, offset 0x291, size 0x1 
 __declspec(property(get=__cordl_internal_get_running10, put=__cordl_internal_set_running10)) bool  running10;

/// @brief Field running11, offset 0x2c1, size 0x1 
 __declspec(property(get=__cordl_internal_get_running11, put=__cordl_internal_set_running11)) bool  running11;

/// @brief Field running12, offset 0x2f1, size 0x1 
 __declspec(property(get=__cordl_internal_get_running12, put=__cordl_internal_set_running12)) bool  running12;

/// @brief Field running13, offset 0x321, size 0x1 
 __declspec(property(get=__cordl_internal_get_running13, put=__cordl_internal_set_running13)) bool  running13;

/// @brief Field running14, offset 0x351, size 0x1 
 __declspec(property(get=__cordl_internal_get_running14, put=__cordl_internal_set_running14)) bool  running14;

/// @brief Field running15, offset 0x381, size 0x1 
 __declspec(property(get=__cordl_internal_get_running15, put=__cordl_internal_set_running15)) bool  running15;

/// @brief Field running2, offset 0x111, size 0x1 
 __declspec(property(get=__cordl_internal_get_running2, put=__cordl_internal_set_running2)) bool  running2;

/// @brief Field running3, offset 0x141, size 0x1 
 __declspec(property(get=__cordl_internal_get_running3, put=__cordl_internal_set_running3)) bool  running3;

/// @brief Field running4, offset 0x171, size 0x1 
 __declspec(property(get=__cordl_internal_get_running4, put=__cordl_internal_set_running4)) bool  running4;

/// @brief Field running5, offset 0x1a1, size 0x1 
 __declspec(property(get=__cordl_internal_get_running5, put=__cordl_internal_set_running5)) bool  running5;

/// @brief Field running6, offset 0x1d1, size 0x1 
 __declspec(property(get=__cordl_internal_get_running6, put=__cordl_internal_set_running6)) bool  running6;

/// @brief Field running7, offset 0x201, size 0x1 
 __declspec(property(get=__cordl_internal_get_running7, put=__cordl_internal_set_running7)) bool  running7;

/// @brief Field running8, offset 0x231, size 0x1 
 __declspec(property(get=__cordl_internal_get_running8, put=__cordl_internal_set_running8)) bool  running8;

/// @brief Field running9, offset 0x261, size 0x1 
 __declspec(property(get=__cordl_internal_get_running9, put=__cordl_internal_set_running9)) bool  running9;

/// @brief Field source1, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_source1, put=__cordl_internal_set_source1)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T1>*  source1;

/// @brief Field source10, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_source10, put=__cordl_internal_set_source10)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T10>*  source10;

/// @brief Field source11, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_source11, put=__cordl_internal_set_source11)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T11>*  source11;

/// @brief Field source12, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_source12, put=__cordl_internal_set_source12)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T12>*  source12;

/// @brief Field source13, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_source13, put=__cordl_internal_set_source13)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T13>*  source13;

/// @brief Field source14, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_source14, put=__cordl_internal_set_source14)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T14>*  source14;

/// @brief Field source15, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_source15, put=__cordl_internal_set_source15)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T15>*  source15;

/// @brief Field source2, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_source2, put=__cordl_internal_set_source2)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T2>*  source2;

/// @brief Field source3, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_source3, put=__cordl_internal_set_source3)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T3>*  source3;

/// @brief Field source4, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_source4, put=__cordl_internal_set_source4)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T4>*  source4;

/// @brief Field source5, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_source5, put=__cordl_internal_set_source5)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T5>*  source5;

/// @brief Field source6, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_source6, put=__cordl_internal_set_source6)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T6>*  source6;

/// @brief Field source7, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_source7, put=__cordl_internal_set_source7)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T7>*  source7;

/// @brief Field source8, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_source8, put=__cordl_internal_set_source8)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T8>*  source8;

/// @brief Field source9, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_source9, put=__cordl_internal_set_source9)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T9>*  source9;

/// @brief Field syncRunning, offset 0x394, size 0x1 
 __declspec(property(get=__cordl_internal_get_syncRunning, put=__cordl_internal_set_syncRunning)) bool  syncRunning;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>*() noexcept;

/// @brief Method Completed1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void Completed1(::System::Object*  state) ;

/// @brief Method Completed10, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void Completed10(::System::Object*  state) ;

/// @brief Method Completed11, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void Completed11(::System::Object*  state) ;

/// @brief Method Completed12, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void Completed12(::System::Object*  state) ;

/// @brief Method Completed13, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void Completed13(::System::Object*  state) ;

/// @brief Method Completed14, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void Completed14(::System::Object*  state) ;

/// @brief Method Completed15, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void Completed15(::System::Object*  state) ;

/// @brief Method Completed2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void Completed2(::System::Object*  state) ;

/// @brief Method Completed3, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void Completed3(::System::Object*  state) ;

/// @brief Method Completed4, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void Completed4(::System::Object*  state) ;

/// @brief Method Completed5, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void Completed5(::System::Object*  state) ;

/// @brief Method Completed6, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void Completed6(::System::Object*  state) ;

/// @brief Method Completed7, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void Completed7(::System::Object*  state) ;

/// @brief Method Completed8, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void Completed8(::System::Object*  state) ;

/// @brief Method Completed9, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void Completed9(::System::Object*  state) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.CombineLatest`16::_CombineLatest::<DisposeAsync>d__131<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, TResult>))]
/// @brief Method DisposeAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask DisposeAsync() ;

/// @brief Method MoveNextAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> MoveNextAsync() ;

static inline ::Cysharp::Threading::Tasks::Linq::CombineLatest_16__CombineLatest<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15,TResult>* New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T1>*  source1, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T2>*  source2, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T3>*  source3, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T4>*  source4, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T5>*  source5, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T6>*  source6, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T7>*  source7, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T8>*  source8, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T9>*  source9, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T10>*  source10, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T11>*  source11, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T12>*  source12, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T13>*  source13, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T14>*  source14, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T15>*  source15, ::System::Func_16<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15,TResult>*  resultSelector, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method TrySetResult, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TrySetResult() ;

constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool> const& __cordl_internal_get_awaiter1() const;

constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool>& __cordl_internal_get_awaiter1() ;

constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool> const& __cordl_internal_get_awaiter10() const;

constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool>& __cordl_internal_get_awaiter10() ;

constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool> const& __cordl_internal_get_awaiter11() const;

constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool>& __cordl_internal_get_awaiter11() ;

constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool> const& __cordl_internal_get_awaiter12() const;

constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool>& __cordl_internal_get_awaiter12() ;

constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool> const& __cordl_internal_get_awaiter13() const;

constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool>& __cordl_internal_get_awaiter13() ;

constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool> const& __cordl_internal_get_awaiter14() const;

constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool>& __cordl_internal_get_awaiter14() ;

constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool> const& __cordl_internal_get_awaiter15() const;

constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool>& __cordl_internal_get_awaiter15() ;

constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool> const& __cordl_internal_get_awaiter2() const;

constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool>& __cordl_internal_get_awaiter2() ;

constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool> const& __cordl_internal_get_awaiter3() const;

constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool>& __cordl_internal_get_awaiter3() ;

constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool> const& __cordl_internal_get_awaiter4() const;

constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool>& __cordl_internal_get_awaiter4() ;

constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool> const& __cordl_internal_get_awaiter5() const;

constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool>& __cordl_internal_get_awaiter5() ;

constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool> const& __cordl_internal_get_awaiter6() const;

constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool>& __cordl_internal_get_awaiter6() ;

constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool> const& __cordl_internal_get_awaiter7() const;

constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool>& __cordl_internal_get_awaiter7() ;

constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool> const& __cordl_internal_get_awaiter8() const;

constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool>& __cordl_internal_get_awaiter8() ;

constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool> const& __cordl_internal_get_awaiter9() const;

constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool>& __cordl_internal_get_awaiter9() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr int32_t const& __cordl_internal_get_completedCount() const;

constexpr int32_t& __cordl_internal_get_completedCount() ;

constexpr T1 const& __cordl_internal_get_current1() const;

constexpr T1& __cordl_internal_get_current1() ;

constexpr T10 const& __cordl_internal_get_current10() const;

constexpr T10& __cordl_internal_get_current10() ;

constexpr T11 const& __cordl_internal_get_current11() const;

constexpr T11& __cordl_internal_get_current11() ;

constexpr T12 const& __cordl_internal_get_current12() const;

constexpr T12& __cordl_internal_get_current12() ;

constexpr T13 const& __cordl_internal_get_current13() const;

constexpr T13& __cordl_internal_get_current13() ;

constexpr T14 const& __cordl_internal_get_current14() const;

constexpr T14& __cordl_internal_get_current14() ;

constexpr T15 const& __cordl_internal_get_current15() const;

constexpr T15& __cordl_internal_get_current15() ;

constexpr T2 const& __cordl_internal_get_current2() const;

constexpr T2& __cordl_internal_get_current2() ;

constexpr T3 const& __cordl_internal_get_current3() const;

constexpr T3& __cordl_internal_get_current3() ;

constexpr T4 const& __cordl_internal_get_current4() const;

constexpr T4& __cordl_internal_get_current4() ;

constexpr T5 const& __cordl_internal_get_current5() const;

constexpr T5& __cordl_internal_get_current5() ;

constexpr T6 const& __cordl_internal_get_current6() const;

constexpr T6& __cordl_internal_get_current6() ;

constexpr T7 const& __cordl_internal_get_current7() const;

constexpr T7& __cordl_internal_get_current7() ;

constexpr T8 const& __cordl_internal_get_current8() const;

constexpr T8& __cordl_internal_get_current8() ;

constexpr T9 const& __cordl_internal_get_current9() const;

constexpr T9& __cordl_internal_get_current9() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T1>* const& __cordl_internal_get_enumerator1() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T1>*& __cordl_internal_get_enumerator1() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T10>* const& __cordl_internal_get_enumerator10() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T10>*& __cordl_internal_get_enumerator10() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T11>* const& __cordl_internal_get_enumerator11() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T11>*& __cordl_internal_get_enumerator11() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T12>* const& __cordl_internal_get_enumerator12() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T12>*& __cordl_internal_get_enumerator12() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T13>* const& __cordl_internal_get_enumerator13() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T13>*& __cordl_internal_get_enumerator13() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T14>* const& __cordl_internal_get_enumerator14() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T14>*& __cordl_internal_get_enumerator14() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T15>* const& __cordl_internal_get_enumerator15() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T15>*& __cordl_internal_get_enumerator15() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T2>* const& __cordl_internal_get_enumerator2() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T2>*& __cordl_internal_get_enumerator2() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T3>* const& __cordl_internal_get_enumerator3() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T3>*& __cordl_internal_get_enumerator3() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T4>* const& __cordl_internal_get_enumerator4() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T4>*& __cordl_internal_get_enumerator4() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T5>* const& __cordl_internal_get_enumerator5() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T5>*& __cordl_internal_get_enumerator5() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T6>* const& __cordl_internal_get_enumerator6() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T6>*& __cordl_internal_get_enumerator6() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T7>* const& __cordl_internal_get_enumerator7() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T7>*& __cordl_internal_get_enumerator7() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T8>* const& __cordl_internal_get_enumerator8() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T8>*& __cordl_internal_get_enumerator8() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T9>* const& __cordl_internal_get_enumerator9() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T9>*& __cordl_internal_get_enumerator9() ;

constexpr bool const& __cordl_internal_get_hasCurrent1() const;

constexpr bool& __cordl_internal_get_hasCurrent1() ;

constexpr bool const& __cordl_internal_get_hasCurrent10() const;

constexpr bool& __cordl_internal_get_hasCurrent10() ;

constexpr bool const& __cordl_internal_get_hasCurrent11() const;

constexpr bool& __cordl_internal_get_hasCurrent11() ;

constexpr bool const& __cordl_internal_get_hasCurrent12() const;

constexpr bool& __cordl_internal_get_hasCurrent12() ;

constexpr bool const& __cordl_internal_get_hasCurrent13() const;

constexpr bool& __cordl_internal_get_hasCurrent13() ;

constexpr bool const& __cordl_internal_get_hasCurrent14() const;

constexpr bool& __cordl_internal_get_hasCurrent14() ;

constexpr bool const& __cordl_internal_get_hasCurrent15() const;

constexpr bool& __cordl_internal_get_hasCurrent15() ;

constexpr bool const& __cordl_internal_get_hasCurrent2() const;

constexpr bool& __cordl_internal_get_hasCurrent2() ;

constexpr bool const& __cordl_internal_get_hasCurrent3() const;

constexpr bool& __cordl_internal_get_hasCurrent3() ;

constexpr bool const& __cordl_internal_get_hasCurrent4() const;

constexpr bool& __cordl_internal_get_hasCurrent4() ;

constexpr bool const& __cordl_internal_get_hasCurrent5() const;

constexpr bool& __cordl_internal_get_hasCurrent5() ;

constexpr bool const& __cordl_internal_get_hasCurrent6() const;

constexpr bool& __cordl_internal_get_hasCurrent6() ;

constexpr bool const& __cordl_internal_get_hasCurrent7() const;

constexpr bool& __cordl_internal_get_hasCurrent7() ;

constexpr bool const& __cordl_internal_get_hasCurrent8() const;

constexpr bool& __cordl_internal_get_hasCurrent8() ;

constexpr bool const& __cordl_internal_get_hasCurrent9() const;

constexpr bool& __cordl_internal_get_hasCurrent9() ;

constexpr TResult const& __cordl_internal_get_result() const;

constexpr TResult& __cordl_internal_get_result() ;

constexpr ::System::Func_16<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15,TResult>* const& __cordl_internal_get_resultSelector() const;

constexpr ::System::Func_16<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15,TResult>*& __cordl_internal_get_resultSelector() ;

constexpr bool const& __cordl_internal_get_running1() const;

constexpr bool& __cordl_internal_get_running1() ;

constexpr bool const& __cordl_internal_get_running10() const;

constexpr bool& __cordl_internal_get_running10() ;

constexpr bool const& __cordl_internal_get_running11() const;

constexpr bool& __cordl_internal_get_running11() ;

constexpr bool const& __cordl_internal_get_running12() const;

constexpr bool& __cordl_internal_get_running12() ;

constexpr bool const& __cordl_internal_get_running13() const;

constexpr bool& __cordl_internal_get_running13() ;

constexpr bool const& __cordl_internal_get_running14() const;

constexpr bool& __cordl_internal_get_running14() ;

constexpr bool const& __cordl_internal_get_running15() const;

constexpr bool& __cordl_internal_get_running15() ;

constexpr bool const& __cordl_internal_get_running2() const;

constexpr bool& __cordl_internal_get_running2() ;

constexpr bool const& __cordl_internal_get_running3() const;

constexpr bool& __cordl_internal_get_running3() ;

constexpr bool const& __cordl_internal_get_running4() const;

constexpr bool& __cordl_internal_get_running4() ;

constexpr bool const& __cordl_internal_get_running5() const;

constexpr bool& __cordl_internal_get_running5() ;

constexpr bool const& __cordl_internal_get_running6() const;

constexpr bool& __cordl_internal_get_running6() ;

constexpr bool const& __cordl_internal_get_running7() const;

constexpr bool& __cordl_internal_get_running7() ;

constexpr bool const& __cordl_internal_get_running8() const;

constexpr bool& __cordl_internal_get_running8() ;

constexpr bool const& __cordl_internal_get_running9() const;

constexpr bool& __cordl_internal_get_running9() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T1>* const& __cordl_internal_get_source1() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T1>*& __cordl_internal_get_source1() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T10>* const& __cordl_internal_get_source10() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T10>*& __cordl_internal_get_source10() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T11>* const& __cordl_internal_get_source11() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T11>*& __cordl_internal_get_source11() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T12>* const& __cordl_internal_get_source12() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T12>*& __cordl_internal_get_source12() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T13>* const& __cordl_internal_get_source13() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T13>*& __cordl_internal_get_source13() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T14>* const& __cordl_internal_get_source14() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T14>*& __cordl_internal_get_source14() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T15>* const& __cordl_internal_get_source15() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T15>*& __cordl_internal_get_source15() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T2>* const& __cordl_internal_get_source2() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T2>*& __cordl_internal_get_source2() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T3>* const& __cordl_internal_get_source3() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T3>*& __cordl_internal_get_source3() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T4>* const& __cordl_internal_get_source4() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T4>*& __cordl_internal_get_source4() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T5>* const& __cordl_internal_get_source5() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T5>*& __cordl_internal_get_source5() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T6>* const& __cordl_internal_get_source6() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T6>*& __cordl_internal_get_source6() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T7>* const& __cordl_internal_get_source7() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T7>*& __cordl_internal_get_source7() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T8>* const& __cordl_internal_get_source8() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T8>*& __cordl_internal_get_source8() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T9>* const& __cordl_internal_get_source9() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T9>*& __cordl_internal_get_source9() ;

constexpr bool const& __cordl_internal_get_syncRunning() const;

constexpr bool& __cordl_internal_get_syncRunning() ;

constexpr void __cordl_internal_set_awaiter1(::GlobalNamespace::UniTask_1_Awaiter<bool>  value) ;

constexpr void __cordl_internal_set_awaiter10(::GlobalNamespace::UniTask_1_Awaiter<bool>  value) ;

constexpr void __cordl_internal_set_awaiter11(::GlobalNamespace::UniTask_1_Awaiter<bool>  value) ;

constexpr void __cordl_internal_set_awaiter12(::GlobalNamespace::UniTask_1_Awaiter<bool>  value) ;

constexpr void __cordl_internal_set_awaiter13(::GlobalNamespace::UniTask_1_Awaiter<bool>  value) ;

constexpr void __cordl_internal_set_awaiter14(::GlobalNamespace::UniTask_1_Awaiter<bool>  value) ;

constexpr void __cordl_internal_set_awaiter15(::GlobalNamespace::UniTask_1_Awaiter<bool>  value) ;

constexpr void __cordl_internal_set_awaiter2(::GlobalNamespace::UniTask_1_Awaiter<bool>  value) ;

constexpr void __cordl_internal_set_awaiter3(::GlobalNamespace::UniTask_1_Awaiter<bool>  value) ;

constexpr void __cordl_internal_set_awaiter4(::GlobalNamespace::UniTask_1_Awaiter<bool>  value) ;

constexpr void __cordl_internal_set_awaiter5(::GlobalNamespace::UniTask_1_Awaiter<bool>  value) ;

constexpr void __cordl_internal_set_awaiter6(::GlobalNamespace::UniTask_1_Awaiter<bool>  value) ;

constexpr void __cordl_internal_set_awaiter7(::GlobalNamespace::UniTask_1_Awaiter<bool>  value) ;

constexpr void __cordl_internal_set_awaiter8(::GlobalNamespace::UniTask_1_Awaiter<bool>  value) ;

constexpr void __cordl_internal_set_awaiter9(::GlobalNamespace::UniTask_1_Awaiter<bool>  value) ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_completedCount(int32_t  value) ;

constexpr void __cordl_internal_set_current1(T1  value) ;

constexpr void __cordl_internal_set_current10(T10  value) ;

constexpr void __cordl_internal_set_current11(T11  value) ;

constexpr void __cordl_internal_set_current12(T12  value) ;

constexpr void __cordl_internal_set_current13(T13  value) ;

constexpr void __cordl_internal_set_current14(T14  value) ;

constexpr void __cordl_internal_set_current15(T15  value) ;

constexpr void __cordl_internal_set_current2(T2  value) ;

constexpr void __cordl_internal_set_current3(T3  value) ;

constexpr void __cordl_internal_set_current4(T4  value) ;

constexpr void __cordl_internal_set_current5(T5  value) ;

constexpr void __cordl_internal_set_current6(T6  value) ;

constexpr void __cordl_internal_set_current7(T7  value) ;

constexpr void __cordl_internal_set_current8(T8  value) ;

constexpr void __cordl_internal_set_current9(T9  value) ;

constexpr void __cordl_internal_set_enumerator1(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T1>*  value) ;

constexpr void __cordl_internal_set_enumerator10(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T10>*  value) ;

constexpr void __cordl_internal_set_enumerator11(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T11>*  value) ;

constexpr void __cordl_internal_set_enumerator12(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T12>*  value) ;

constexpr void __cordl_internal_set_enumerator13(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T13>*  value) ;

constexpr void __cordl_internal_set_enumerator14(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T14>*  value) ;

constexpr void __cordl_internal_set_enumerator15(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T15>*  value) ;

constexpr void __cordl_internal_set_enumerator2(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T2>*  value) ;

constexpr void __cordl_internal_set_enumerator3(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T3>*  value) ;

constexpr void __cordl_internal_set_enumerator4(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T4>*  value) ;

constexpr void __cordl_internal_set_enumerator5(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T5>*  value) ;

constexpr void __cordl_internal_set_enumerator6(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T6>*  value) ;

constexpr void __cordl_internal_set_enumerator7(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T7>*  value) ;

constexpr void __cordl_internal_set_enumerator8(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T8>*  value) ;

constexpr void __cordl_internal_set_enumerator9(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T9>*  value) ;

constexpr void __cordl_internal_set_hasCurrent1(bool  value) ;

constexpr void __cordl_internal_set_hasCurrent10(bool  value) ;

constexpr void __cordl_internal_set_hasCurrent11(bool  value) ;

constexpr void __cordl_internal_set_hasCurrent12(bool  value) ;

constexpr void __cordl_internal_set_hasCurrent13(bool  value) ;

constexpr void __cordl_internal_set_hasCurrent14(bool  value) ;

constexpr void __cordl_internal_set_hasCurrent15(bool  value) ;

constexpr void __cordl_internal_set_hasCurrent2(bool  value) ;

constexpr void __cordl_internal_set_hasCurrent3(bool  value) ;

constexpr void __cordl_internal_set_hasCurrent4(bool  value) ;

constexpr void __cordl_internal_set_hasCurrent5(bool  value) ;

constexpr void __cordl_internal_set_hasCurrent6(bool  value) ;

constexpr void __cordl_internal_set_hasCurrent7(bool  value) ;

constexpr void __cordl_internal_set_hasCurrent8(bool  value) ;

constexpr void __cordl_internal_set_hasCurrent9(bool  value) ;

constexpr void __cordl_internal_set_result(TResult  value) ;

constexpr void __cordl_internal_set_resultSelector(::System::Func_16<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15,TResult>*  value) ;

constexpr void __cordl_internal_set_running1(bool  value) ;

constexpr void __cordl_internal_set_running10(bool  value) ;

constexpr void __cordl_internal_set_running11(bool  value) ;

constexpr void __cordl_internal_set_running12(bool  value) ;

constexpr void __cordl_internal_set_running13(bool  value) ;

constexpr void __cordl_internal_set_running14(bool  value) ;

constexpr void __cordl_internal_set_running15(bool  value) ;

constexpr void __cordl_internal_set_running2(bool  value) ;

constexpr void __cordl_internal_set_running3(bool  value) ;

constexpr void __cordl_internal_set_running4(bool  value) ;

constexpr void __cordl_internal_set_running5(bool  value) ;

constexpr void __cordl_internal_set_running6(bool  value) ;

constexpr void __cordl_internal_set_running7(bool  value) ;

constexpr void __cordl_internal_set_running8(bool  value) ;

constexpr void __cordl_internal_set_running9(bool  value) ;

constexpr void __cordl_internal_set_source1(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T1>*  value) ;

constexpr void __cordl_internal_set_source10(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T10>*  value) ;

constexpr void __cordl_internal_set_source11(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T11>*  value) ;

constexpr void __cordl_internal_set_source12(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T12>*  value) ;

constexpr void __cordl_internal_set_source13(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T13>*  value) ;

constexpr void __cordl_internal_set_source14(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T14>*  value) ;

constexpr void __cordl_internal_set_source15(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T15>*  value) ;

constexpr void __cordl_internal_set_source2(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T2>*  value) ;

constexpr void __cordl_internal_set_source3(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T3>*  value) ;

constexpr void __cordl_internal_set_source4(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T4>*  value) ;

constexpr void __cordl_internal_set_source5(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T5>*  value) ;

constexpr void __cordl_internal_set_source6(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T6>*  value) ;

constexpr void __cordl_internal_set_source7(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T7>*  value) ;

constexpr void __cordl_internal_set_source8(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T8>*  value) ;

constexpr void __cordl_internal_set_source9(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T9>*  value) ;

constexpr void __cordl_internal_set_syncRunning(bool  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T1>*  source1, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T2>*  source2, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T3>*  source3, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T4>*  source4, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T5>*  source5, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T6>*  source6, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T7>*  source7, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T8>*  source8, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T9>*  source9, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T10>*  source10, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T11>*  source11, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T12>*  source12, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T13>*  source13, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T14>*  source14, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T15>*  source15, ::System::Func_16<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15,TResult>*  resultSelector, ::System::Threading::CancellationToken  cancellationToken) ;

static inline ::System::Action_1<::System::Object*>* getStaticF_Completed10Delegate() ;

static inline ::System::Action_1<::System::Object*>* getStaticF_Completed11Delegate() ;

static inline ::System::Action_1<::System::Object*>* getStaticF_Completed12Delegate() ;

static inline ::System::Action_1<::System::Object*>* getStaticF_Completed13Delegate() ;

static inline ::System::Action_1<::System::Object*>* getStaticF_Completed14Delegate() ;

static inline ::System::Action_1<::System::Object*>* getStaticF_Completed15Delegate() ;

static inline ::System::Action_1<::System::Object*>* getStaticF_Completed1Delegate() ;

static inline ::System::Action_1<::System::Object*>* getStaticF_Completed2Delegate() ;

static inline ::System::Action_1<::System::Object*>* getStaticF_Completed3Delegate() ;

static inline ::System::Action_1<::System::Object*>* getStaticF_Completed4Delegate() ;

static inline ::System::Action_1<::System::Object*>* getStaticF_Completed5Delegate() ;

static inline ::System::Action_1<::System::Object*>* getStaticF_Completed6Delegate() ;

static inline ::System::Action_1<::System::Object*>* getStaticF_Completed7Delegate() ;

static inline ::System::Action_1<::System::Object*>* getStaticF_Completed8Delegate() ;

static inline ::System::Action_1<::System::Object*>* getStaticF_Completed9Delegate() ;

/// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline TResult get_Current() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable* i___Cysharp__Threading__Tasks__IUniTaskAsyncDisposable() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>* i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerator_1_TResult_() noexcept;

static inline void setStaticF_Completed10Delegate(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF_Completed11Delegate(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF_Completed12Delegate(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF_Completed13Delegate(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF_Completed14Delegate(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF_Completed15Delegate(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF_Completed1Delegate(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF_Completed2Delegate(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF_Completed3Delegate(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF_Completed4Delegate(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF_Completed5Delegate(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF_Completed6Delegate(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF_Completed7Delegate(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF_Completed8Delegate(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF_Completed9Delegate(::System::Action_1<::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CombineLatest_16__CombineLatest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CombineLatest_16__CombineLatest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CombineLatest_16__CombineLatest(CombineLatest_16__CombineLatest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CombineLatest_16__CombineLatest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CombineLatest_16__CombineLatest(CombineLatest_16__CombineLatest const& ) = delete;

/// @brief Field CompleteCount offset 0xffffffff size 0x4
static constexpr int32_t  CompleteCount{static_cast<int32_t>(0xf)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20491};

/// @brief Field source1, offset: 0x38, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T1>*  ___source1;

/// @brief Field source2, offset: 0x40, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T2>*  ___source2;

/// @brief Field source3, offset: 0x48, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T3>*  ___source3;

/// @brief Field source4, offset: 0x50, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T4>*  ___source4;

/// @brief Field source5, offset: 0x58, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T5>*  ___source5;

/// @brief Field source6, offset: 0x60, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T6>*  ___source6;

/// @brief Field source7, offset: 0x68, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T7>*  ___source7;

/// @brief Field source8, offset: 0x70, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T8>*  ___source8;

/// @brief Field source9, offset: 0x78, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T9>*  ___source9;

/// @brief Field source10, offset: 0x80, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T10>*  ___source10;

/// @brief Field source11, offset: 0x88, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T11>*  ___source11;

/// @brief Field source12, offset: 0x90, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T12>*  ___source12;

/// @brief Field source13, offset: 0x98, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T13>*  ___source13;

/// @brief Field source14, offset: 0xa0, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T14>*  ___source14;

/// @brief Field source15, offset: 0xa8, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T15>*  ___source15;

/// @brief Field resultSelector, offset: 0xb0, size: 0x8, def value: None
 ::System::Func_16<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15,TResult>*  ___resultSelector;

/// @brief Field cancellationToken, offset: 0xb8, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

/// @brief Field enumerator1, offset: 0xc0, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T1>*  ___enumerator1;

/// @brief Field awaiter1, offset: 0xc8, size: 0x18, def value: None
 ::GlobalNamespace::UniTask_1_Awaiter<bool>  ___awaiter1;

/// @brief Field hasCurrent1, offset: 0xe0, size: 0x1, def value: None
 bool  ___hasCurrent1;

/// @brief Field running1, offset: 0xe1, size: 0x1, def value: None
 bool  ___running1;

/// @brief Field current1, offset: 0xe8, size: 0x8, def value: None
 T1  ___current1;

/// @brief Field enumerator2, offset: 0xf0, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T2>*  ___enumerator2;

/// @brief Field awaiter2, offset: 0xf8, size: 0x18, def value: None
 ::GlobalNamespace::UniTask_1_Awaiter<bool>  ___awaiter2;

/// @brief Field hasCurrent2, offset: 0x110, size: 0x1, def value: None
 bool  ___hasCurrent2;

/// @brief Field running2, offset: 0x111, size: 0x1, def value: None
 bool  ___running2;

/// @brief Field current2, offset: 0x118, size: 0x8, def value: None
 T2  ___current2;

/// @brief Field enumerator3, offset: 0x120, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T3>*  ___enumerator3;

/// @brief Field awaiter3, offset: 0x128, size: 0x18, def value: None
 ::GlobalNamespace::UniTask_1_Awaiter<bool>  ___awaiter3;

/// @brief Field hasCurrent3, offset: 0x140, size: 0x1, def value: None
 bool  ___hasCurrent3;

/// @brief Field running3, offset: 0x141, size: 0x1, def value: None
 bool  ___running3;

/// @brief Field current3, offset: 0x148, size: 0x8, def value: None
 T3  ___current3;

/// @brief Field enumerator4, offset: 0x150, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T4>*  ___enumerator4;

/// @brief Field awaiter4, offset: 0x158, size: 0x18, def value: None
 ::GlobalNamespace::UniTask_1_Awaiter<bool>  ___awaiter4;

/// @brief Field hasCurrent4, offset: 0x170, size: 0x1, def value: None
 bool  ___hasCurrent4;

/// @brief Field running4, offset: 0x171, size: 0x1, def value: None
 bool  ___running4;

/// @brief Field current4, offset: 0x178, size: 0x8, def value: None
 T4  ___current4;

/// @brief Field enumerator5, offset: 0x180, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T5>*  ___enumerator5;

/// @brief Field awaiter5, offset: 0x188, size: 0x18, def value: None
 ::GlobalNamespace::UniTask_1_Awaiter<bool>  ___awaiter5;

/// @brief Field hasCurrent5, offset: 0x1a0, size: 0x1, def value: None
 bool  ___hasCurrent5;

/// @brief Field running5, offset: 0x1a1, size: 0x1, def value: None
 bool  ___running5;

/// @brief Field current5, offset: 0x1a8, size: 0x8, def value: None
 T5  ___current5;

/// @brief Field enumerator6, offset: 0x1b0, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T6>*  ___enumerator6;

/// @brief Field awaiter6, offset: 0x1b8, size: 0x18, def value: None
 ::GlobalNamespace::UniTask_1_Awaiter<bool>  ___awaiter6;

/// @brief Field hasCurrent6, offset: 0x1d0, size: 0x1, def value: None
 bool  ___hasCurrent6;

/// @brief Field running6, offset: 0x1d1, size: 0x1, def value: None
 bool  ___running6;

/// @brief Field current6, offset: 0x1d8, size: 0x8, def value: None
 T6  ___current6;

/// @brief Field enumerator7, offset: 0x1e0, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T7>*  ___enumerator7;

/// @brief Field awaiter7, offset: 0x1e8, size: 0x18, def value: None
 ::GlobalNamespace::UniTask_1_Awaiter<bool>  ___awaiter7;

/// @brief Field hasCurrent7, offset: 0x200, size: 0x1, def value: None
 bool  ___hasCurrent7;

/// @brief Field running7, offset: 0x201, size: 0x1, def value: None
 bool  ___running7;

/// @brief Field current7, offset: 0x208, size: 0x8, def value: None
 T7  ___current7;

/// @brief Field enumerator8, offset: 0x210, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T8>*  ___enumerator8;

/// @brief Field awaiter8, offset: 0x218, size: 0x18, def value: None
 ::GlobalNamespace::UniTask_1_Awaiter<bool>  ___awaiter8;

/// @brief Field hasCurrent8, offset: 0x230, size: 0x1, def value: None
 bool  ___hasCurrent8;

/// @brief Field running8, offset: 0x231, size: 0x1, def value: None
 bool  ___running8;

/// @brief Field current8, offset: 0x238, size: 0x8, def value: None
 T8  ___current8;

/// @brief Field enumerator9, offset: 0x240, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T9>*  ___enumerator9;

/// @brief Field awaiter9, offset: 0x248, size: 0x18, def value: None
 ::GlobalNamespace::UniTask_1_Awaiter<bool>  ___awaiter9;

/// @brief Field hasCurrent9, offset: 0x260, size: 0x1, def value: None
 bool  ___hasCurrent9;

/// @brief Field running9, offset: 0x261, size: 0x1, def value: None
 bool  ___running9;

/// @brief Field current9, offset: 0x268, size: 0x8, def value: None
 T9  ___current9;

/// @brief Field enumerator10, offset: 0x270, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T10>*  ___enumerator10;

/// @brief Field awaiter10, offset: 0x278, size: 0x18, def value: None
 ::GlobalNamespace::UniTask_1_Awaiter<bool>  ___awaiter10;

/// @brief Field hasCurrent10, offset: 0x290, size: 0x1, def value: None
 bool  ___hasCurrent10;

/// @brief Field running10, offset: 0x291, size: 0x1, def value: None
 bool  ___running10;

/// @brief Field current10, offset: 0x298, size: 0x8, def value: None
 T10  ___current10;

/// @brief Field enumerator11, offset: 0x2a0, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T11>*  ___enumerator11;

/// @brief Field awaiter11, offset: 0x2a8, size: 0x18, def value: None
 ::GlobalNamespace::UniTask_1_Awaiter<bool>  ___awaiter11;

/// @brief Field hasCurrent11, offset: 0x2c0, size: 0x1, def value: None
 bool  ___hasCurrent11;

/// @brief Field running11, offset: 0x2c1, size: 0x1, def value: None
 bool  ___running11;

/// @brief Field current11, offset: 0x2c8, size: 0x8, def value: None
 T11  ___current11;

/// @brief Field enumerator12, offset: 0x2d0, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T12>*  ___enumerator12;

/// @brief Field awaiter12, offset: 0x2d8, size: 0x18, def value: None
 ::GlobalNamespace::UniTask_1_Awaiter<bool>  ___awaiter12;

/// @brief Field hasCurrent12, offset: 0x2f0, size: 0x1, def value: None
 bool  ___hasCurrent12;

/// @brief Field running12, offset: 0x2f1, size: 0x1, def value: None
 bool  ___running12;

/// @brief Field current12, offset: 0x2f8, size: 0x8, def value: None
 T12  ___current12;

/// @brief Field enumerator13, offset: 0x300, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T13>*  ___enumerator13;

/// @brief Field awaiter13, offset: 0x308, size: 0x18, def value: None
 ::GlobalNamespace::UniTask_1_Awaiter<bool>  ___awaiter13;

/// @brief Field hasCurrent13, offset: 0x320, size: 0x1, def value: None
 bool  ___hasCurrent13;

/// @brief Field running13, offset: 0x321, size: 0x1, def value: None
 bool  ___running13;

/// @brief Field current13, offset: 0x328, size: 0x8, def value: None
 T13  ___current13;

/// @brief Field enumerator14, offset: 0x330, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T14>*  ___enumerator14;

/// @brief Field awaiter14, offset: 0x338, size: 0x18, def value: None
 ::GlobalNamespace::UniTask_1_Awaiter<bool>  ___awaiter14;

/// @brief Field hasCurrent14, offset: 0x350, size: 0x1, def value: None
 bool  ___hasCurrent14;

/// @brief Field running14, offset: 0x351, size: 0x1, def value: None
 bool  ___running14;

/// @brief Field current14, offset: 0x358, size: 0x8, def value: None
 T14  ___current14;

/// @brief Field enumerator15, offset: 0x360, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T15>*  ___enumerator15;

/// @brief Field awaiter15, offset: 0x368, size: 0x18, def value: None
 ::GlobalNamespace::UniTask_1_Awaiter<bool>  ___awaiter15;

/// @brief Field hasCurrent15, offset: 0x380, size: 0x1, def value: None
 bool  ___hasCurrent15;

/// @brief Field running15, offset: 0x381, size: 0x1, def value: None
 bool  ___running15;

/// @brief Field current15, offset: 0x388, size: 0x8, def value: None
 T15  ___current15;

/// @brief Field completedCount, offset: 0x390, size: 0x4, def value: None
 int32_t  ___completedCount;

/// @brief Field syncRunning, offset: 0x394, size: 0x1, def value: None
 bool  ___syncRunning;

/// @brief Field result, offset: 0x398, size: 0x8, def value: None
 TResult  ___result;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Linq
