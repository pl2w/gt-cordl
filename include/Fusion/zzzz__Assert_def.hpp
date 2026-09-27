#pragma once
// IWYU pragma private; include "Fusion/Assert.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(Assert)
namespace System {
class Object;
}
// Forward declare root types
namespace Fusion {
class _cordl_Assert;
}
// Write type traits
MARK_REF_T(::Fusion::_cordl_Assert*);
DEFINE_IL2CPP_CLASS(::Fusion::_cordl_Assert*, "Fusion", "Assert");
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.Assert
class CORDL_TYPE _cordl_Assert : public ::System::Object {
public:
// Declarations
/// [ContractAnnotation("condition:false=>halt")]
/// [AssertionMethod]
/// @brief Method Always, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T0>
static inline void Always(/* [DoesNotReturnIf(false)] */ bool  condition, T0  arg0) ;

/// [ContractAnnotation("condition:false=>halt")]
/// [AssertionMethod]
/// @brief Method Always, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T0,typename T1>
static inline void Always(/* [DoesNotReturnIf(false)] */ bool  condition, T0  arg0, T1  arg1) ;

/// [ContractAnnotation("condition:false=>halt")]
/// [AssertionMethod]
/// @brief Method Always, addr 0x5f444bc, size 0x48, virtual false, abstract: false, final false
static inline void Always(/* [DoesNotReturnIf(false)] */ bool  condition, ::StringW  error) ;

/// [ContractAnnotation("condition:false=>halt")]
/// [AssertionMethod]
/// [StringFormatMethod("format")]
/// @brief Method Always, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T0>
static inline void Always(/* [DoesNotReturnIf(false)] */ bool  condition, ::StringW  format, T0  arg0) ;

/// [ContractAnnotation("condition:false=>halt")]
/// [AssertionMethod]
/// [StringFormatMethod("format")]
/// @brief Method Always, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T0,typename T1>
static inline void Always(/* [DoesNotReturnIf(false)] */ bool  condition, ::StringW  format, T0  arg0, T1  arg1) ;

/// [ContractAnnotation("condition:false=>halt")]
/// [AssertionMethod]
/// [StringFormatMethod("format")]
/// @brief Method Always, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T0,typename T1,typename T2>
static inline void Always(/* [DoesNotReturnIf(false)] */ bool  condition, ::StringW  format, T0  arg0, T1  arg1, T2  arg2) ;

/// [DoesNotReturn]
/// @brief Method AlwaysFail, addr 0x5f4447c, size 0x40, virtual false, abstract: false, final false
static inline void AlwaysFail(::StringW  error) ;

/// [Conditional("DEBUG")]
/// [AssertionMethod]
/// [ContractAnnotation("condition:null=>halt")]
/// @brief Method Check, addr 0x5f44380, size 0x3c, virtual false, abstract: false, final false
static inline void Check(::System::Object*  condition) ;

/// [Conditional("DEBUG")]
/// [AssertionMethod]
/// [ContractAnnotation("condition:false=>halt")]
/// @brief Method Check, addr 0x5f443f8, size 0x3c, virtual false, abstract: false, final false
static inline void Check(/* [DoesNotReturnIf(false)] */ bool  condition) ;

/// [Conditional("DEBUG")]
/// [AssertionMethod]
/// [ContractAnnotation("condition:false=>halt")]
/// @brief Method Check, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T0>
static inline void Check(/* [DoesNotReturnIf(false)] */ bool  condition, T0  arg0) ;

/// [Conditional("DEBUG")]
/// [AssertionMethod]
/// [ContractAnnotation("condition:false=>halt")]
/// @brief Method Check, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T0,typename T1>
static inline void Check(/* [DoesNotReturnIf(false)] */ bool  condition, T0  arg0, T1  arg1) ;

/// [Conditional("DEBUG")]
/// [AssertionMethod]
/// [ContractAnnotation("condition:false=>halt")]
/// @brief Method Check, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T0,typename T1,typename T2>
static inline void Check(/* [DoesNotReturnIf(false)] */ bool  condition, T0  arg0, T1  arg1, T2  arg2) ;

/// [Conditional("DEBUG")]
/// [AssertionMethod]
/// [ContractAnnotation("condition:false=>halt")]
/// @brief Method Check, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T0,typename T1,typename T2,typename T3>
static inline void Check(/* [DoesNotReturnIf(false)] */ bool  condition, T0  arg0, T1  arg1, T2  arg2, T3  arg3) ;

/// [Conditional("DEBUG")]
/// [AssertionMethod]
/// [ContractAnnotation("condition:false=>halt")]
/// @brief Method Check, addr 0x5f44434, size 0x48, virtual false, abstract: false, final false
static inline void Check(/* [DoesNotReturnIf(false)] */ bool  condition, ::StringW  error) ;

/// [Conditional("DEBUG")]
/// [AssertionMethod]
/// [ContractAnnotation("condition:false=>halt")]
/// [StringFormatMethod("format")]
/// @brief Method Check, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T0>
static inline void Check(/* [DoesNotReturnIf(false)] */ bool  condition, ::StringW  format, T0  arg0) ;

/// [Conditional("DEBUG")]
/// [AssertionMethod]
/// [ContractAnnotation("condition:false=>halt")]
/// [StringFormatMethod("format")]
/// @brief Method Check, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T0,typename T1>
static inline void Check(/* [DoesNotReturnIf(false)] */ bool  condition, ::StringW  format, T0  arg0, T1  arg1) ;

/// [Conditional("DEBUG")]
/// [AssertionMethod]
/// [ContractAnnotation("condition:false=>halt")]
/// [StringFormatMethod("format")]
/// @brief Method Check, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T0,typename T1,typename T2>
static inline void Check(/* [DoesNotReturnIf(false)] */ bool  condition, ::StringW  format, T0  arg0, T1  arg1, T2  arg2) ;

/// [Conditional("DEBUG")]
/// [AssertionMethod]
/// [ContractAnnotation("condition:false=>halt")]
/// [StringFormatMethod("format")]
/// @brief Method Check, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T0,typename T1,typename T2,typename T3>
static inline void Check(/* [DoesNotReturnIf(false)] */ bool  condition, ::StringW  format, T0  arg0, T1  arg1, T2  arg2, T3  arg3) ;

/// [Conditional("DEBUG")]
/// [AssertionMethod]
/// [ContractAnnotation("condition:null=>halt")]
/// @brief Method Check, addr 0x5f443bc, size 0x3c, virtual false, abstract: false, final false
static inline void Check(void*  condition) ;

/// [Conditional("DEBUG")]
/// [DoesNotReturn]
/// @brief Method Fail, addr 0x5f442c4, size 0x34, virtual false, abstract: false, final false
static inline void Fail() ;

/// [Conditional("DEBUG")]
/// [DoesNotReturn]
/// @brief Method Fail, addr 0x5f442f8, size 0x40, virtual false, abstract: false, final false
static inline void Fail(::StringW  error) ;

/// [Conditional("DEBUG")]
/// [DoesNotReturn]
/// [StringFormatMethod("format")]
/// @brief Method Fail, addr 0x5f44338, size 0x48, virtual false, abstract: false, final false
static inline void Fail(::StringW  format, /* [ParamArray] */ ::ArrayW<::System::Object*>  args) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr _cordl_Assert() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "_cordl_Assert", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
_cordl_Assert(_cordl_Assert && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "_cordl_Assert", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
_cordl_Assert(_cordl_Assert const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32714};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::_cordl_Assert) == 0x10, "Size mismatch!");

} // namespace end def Fusion
