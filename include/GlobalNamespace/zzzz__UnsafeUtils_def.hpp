#pragma once
// IWYU pragma private; include "GlobalNamespace/UnsafeUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Delegate_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UnsafeUtils)
namespace GlobalNamespace {
class UnsafeUtils__DelegateData;
}
namespace GlobalNamespace {
class UnsafeUtils__DelegateFields;
}
namespace GlobalNamespace {
class UnsafeUtils__MultiDelegateFields;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace GlobalNamespace {
class UnsafeUtils;
}
namespace GlobalNamespace {
class UnsafeUtils__DelegateData;
}
namespace GlobalNamespace {
class UnsafeUtils__DelegateFields;
}
namespace GlobalNamespace {
class UnsafeUtils__MultiDelegateFields;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::UnsafeUtils*);
MARK_REF_T(::GlobalNamespace::UnsafeUtils__DelegateData*);
MARK_REF_T(::GlobalNamespace::UnsafeUtils__DelegateFields*);
MARK_REF_T(::GlobalNamespace::UnsafeUtils__MultiDelegateFields*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UnsafeUtils*, "", "UnsafeUtils");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UnsafeUtils__DelegateData*, "", "UnsafeUtils/_DelegateData");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UnsafeUtils__DelegateFields*, "", "UnsafeUtils/_DelegateFields");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UnsafeUtils__MultiDelegateFields*, "", "UnsafeUtils/_MultiDelegateFields");
// [Extension]
// Dependencies System.MulticastDelegate, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: UnsafeUtils
class CORDL_TYPE UnsafeUtils : public ::System::Object {
public:
// Declarations
using _DelegateData = ::GlobalNamespace::UnsafeUtils__DelegateData;

using _DelegateFields = ::GlobalNamespace::UnsafeUtils__DelegateFields;

using _MultiDelegateFields = ::GlobalNamespace::UnsafeUtils__MultiDelegateFields;

/// [Extension]
/// @brief Method GetInternalArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::by_ref<::ArrayW<T>> GetInternalArray(::System::Collections::Generic::List_1<T>*  list) ;

/// [Extension]
/// @brief Method GetInvocationListUnsafe, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::System::MulticastDelegate*>)
static inline ::by_ref<::ArrayW<T>> GetInvocationListUnsafe(T  delegate) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnsafeUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnsafeUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnsafeUtils(UnsafeUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnsafeUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnsafeUtils(UnsafeUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3581};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::UnsafeUtils) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: UnsafeUtils/_DelegateData
class CORDL_TYPE UnsafeUtils__DelegateData : public ::System::Object {
public:
// Declarations
/// @brief Field curried_first_arg, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_curried_first_arg, put=__cordl_internal_set_curried_first_arg)) bool  curried_first_arg;

/// @brief Field method_name, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_method_name, put=__cordl_internal_set_method_name)) ::StringW  method_name;

/// @brief Field target_type, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_target_type, put=__cordl_internal_set_target_type)) ::System::Type*  target_type;

static inline ::GlobalNamespace::UnsafeUtils__DelegateData* New_ctor() ;

constexpr bool const& __cordl_internal_get_curried_first_arg() const;

constexpr bool& __cordl_internal_get_curried_first_arg() ;

constexpr ::StringW const& __cordl_internal_get_method_name() const;

constexpr ::StringW& __cordl_internal_get_method_name() ;

constexpr ::System::Type* const& __cordl_internal_get_target_type() const;

constexpr ::System::Type*& __cordl_internal_get_target_type() ;

constexpr void __cordl_internal_set_curried_first_arg(bool  value) ;

constexpr void __cordl_internal_set_method_name(::StringW  value) ;

constexpr void __cordl_internal_set_target_type(::System::Type*  value) ;

/// @brief Method .ctor, addr 0x5b1b97c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnsafeUtils__DelegateData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnsafeUtils__DelegateData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnsafeUtils__DelegateData(UnsafeUtils__DelegateData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnsafeUtils__DelegateData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnsafeUtils__DelegateData(UnsafeUtils__DelegateData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3580};

/// @brief Field target_type, offset: 0x10, size: 0x8, def value: None
 ::System::Type*  ___target_type;

/// @brief Field method_name, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___method_name;

/// @brief Field curried_first_arg, offset: 0x20, size: 0x1, def value: None
 bool  ___curried_first_arg;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UnsafeUtils__DelegateData, ___target_type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnsafeUtils__DelegateData, ___method_name) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnsafeUtils__DelegateData, ___curried_first_arg) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UnsafeUtils__DelegateData) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Delegate, UnsafeUtils::_DelegateFields
namespace GlobalNamespace {
// Is value type: false
// CS Name: UnsafeUtils/_MultiDelegateFields
class CORDL_TYPE UnsafeUtils__MultiDelegateFields : public ::GlobalNamespace::UnsafeUtils__DelegateFields {
public:
// Declarations
/// @brief Field delegates, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_delegates, put=__cordl_internal_set_delegates)) ::ArrayW<::System::Delegate*>  delegates;

static inline ::GlobalNamespace::UnsafeUtils__MultiDelegateFields* New_ctor() ;

constexpr ::ArrayW<::System::Delegate*> const& __cordl_internal_get_delegates() const;

constexpr ::ArrayW<::System::Delegate*>& __cordl_internal_get_delegates() ;

constexpr void __cordl_internal_set_delegates(::ArrayW<::System::Delegate*>  value) ;

/// @brief Method .ctor, addr 0x5b1b96c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnsafeUtils__MultiDelegateFields() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnsafeUtils__MultiDelegateFields", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnsafeUtils__MultiDelegateFields(UnsafeUtils__MultiDelegateFields && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnsafeUtils__MultiDelegateFields", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnsafeUtils__MultiDelegateFields(UnsafeUtils__MultiDelegateFields const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3578};

/// @brief Field delegates, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<::System::Delegate*>  ___delegates;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UnsafeUtils__MultiDelegateFields, ___delegates) == 0x78, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UnsafeUtils__MultiDelegateFields) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.IntPtr, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: UnsafeUtils/_DelegateFields
class CORDL_TYPE UnsafeUtils__DelegateFields : public ::System::Object {
public:
// Declarations
/// @brief Field data, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::GlobalNamespace::UnsafeUtils__DelegateData*  data;

/// @brief Field delegate_trampoline, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_delegate_trampoline, put=__cordl_internal_set_delegate_trampoline)) ::System::IntPtr  delegate_trampoline;

/// @brief Field extra_arg, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_extra_arg, put=__cordl_internal_set_extra_arg)) ::System::IntPtr  extra_arg;

/// @brief Field interp_invoke_impl, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_interp_invoke_impl, put=__cordl_internal_set_interp_invoke_impl)) ::System::IntPtr  interp_invoke_impl;

/// @brief Field interp_method, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_interp_method, put=__cordl_internal_set_interp_method)) ::System::IntPtr  interp_method;

/// @brief Field invoke_impl, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_invoke_impl, put=__cordl_internal_set_invoke_impl)) ::System::IntPtr  invoke_impl;

/// @brief Field m_target, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_target, put=__cordl_internal_set_m_target)) ::System::Object*  m_target;

/// @brief Field method, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_method, put=__cordl_internal_set_method)) ::System::IntPtr  method;

/// @brief Field method_code, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_method_code, put=__cordl_internal_set_method_code)) ::System::IntPtr  method_code;

/// @brief Field method_info, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_method_info, put=__cordl_internal_set_method_info)) ::System::Reflection::MethodInfo*  method_info;

/// @brief Field method_is_virtual, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_method_is_virtual, put=__cordl_internal_set_method_is_virtual)) bool  method_is_virtual;

/// @brief Field method_ptr, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_method_ptr, put=__cordl_internal_set_method_ptr)) ::System::IntPtr  method_ptr;

/// @brief Field original_method_info, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_original_method_info, put=__cordl_internal_set_original_method_info)) ::System::Reflection::MethodInfo*  original_method_info;

static inline ::GlobalNamespace::UnsafeUtils__DelegateFields* New_ctor() ;

constexpr ::GlobalNamespace::UnsafeUtils__DelegateData* const& __cordl_internal_get_data() const;

constexpr ::GlobalNamespace::UnsafeUtils__DelegateData*& __cordl_internal_get_data() ;

constexpr ::System::IntPtr const& __cordl_internal_get_delegate_trampoline() const;

constexpr ::System::IntPtr& __cordl_internal_get_delegate_trampoline() ;

constexpr ::System::IntPtr const& __cordl_internal_get_extra_arg() const;

constexpr ::System::IntPtr& __cordl_internal_get_extra_arg() ;

constexpr ::System::IntPtr const& __cordl_internal_get_interp_invoke_impl() const;

constexpr ::System::IntPtr& __cordl_internal_get_interp_invoke_impl() ;

constexpr ::System::IntPtr const& __cordl_internal_get_interp_method() const;

constexpr ::System::IntPtr& __cordl_internal_get_interp_method() ;

constexpr ::System::IntPtr const& __cordl_internal_get_invoke_impl() const;

constexpr ::System::IntPtr& __cordl_internal_get_invoke_impl() ;

constexpr ::System::Object* const& __cordl_internal_get_m_target() const;

constexpr ::System::Object*& __cordl_internal_get_m_target() ;

constexpr ::System::IntPtr const& __cordl_internal_get_method() const;

constexpr ::System::IntPtr& __cordl_internal_get_method() ;

constexpr ::System::IntPtr const& __cordl_internal_get_method_code() const;

constexpr ::System::IntPtr& __cordl_internal_get_method_code() ;

constexpr ::System::Reflection::MethodInfo* const& __cordl_internal_get_method_info() const;

constexpr ::System::Reflection::MethodInfo*& __cordl_internal_get_method_info() ;

constexpr bool const& __cordl_internal_get_method_is_virtual() const;

constexpr bool& __cordl_internal_get_method_is_virtual() ;

constexpr ::System::IntPtr const& __cordl_internal_get_method_ptr() const;

constexpr ::System::IntPtr& __cordl_internal_get_method_ptr() ;

constexpr ::System::Reflection::MethodInfo* const& __cordl_internal_get_original_method_info() const;

constexpr ::System::Reflection::MethodInfo*& __cordl_internal_get_original_method_info() ;

constexpr void __cordl_internal_set_data(::GlobalNamespace::UnsafeUtils__DelegateData*  value) ;

constexpr void __cordl_internal_set_delegate_trampoline(::System::IntPtr  value) ;

constexpr void __cordl_internal_set_extra_arg(::System::IntPtr  value) ;

constexpr void __cordl_internal_set_interp_invoke_impl(::System::IntPtr  value) ;

constexpr void __cordl_internal_set_interp_method(::System::IntPtr  value) ;

constexpr void __cordl_internal_set_invoke_impl(::System::IntPtr  value) ;

constexpr void __cordl_internal_set_m_target(::System::Object*  value) ;

constexpr void __cordl_internal_set_method(::System::IntPtr  value) ;

constexpr void __cordl_internal_set_method_code(::System::IntPtr  value) ;

constexpr void __cordl_internal_set_method_info(::System::Reflection::MethodInfo*  value) ;

constexpr void __cordl_internal_set_method_is_virtual(bool  value) ;

constexpr void __cordl_internal_set_method_ptr(::System::IntPtr  value) ;

constexpr void __cordl_internal_set_original_method_info(::System::Reflection::MethodInfo*  value) ;

/// @brief Method .ctor, addr 0x5b1b974, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnsafeUtils__DelegateFields() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnsafeUtils__DelegateFields", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnsafeUtils__DelegateFields(UnsafeUtils__DelegateFields && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnsafeUtils__DelegateFields", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnsafeUtils__DelegateFields(UnsafeUtils__DelegateFields const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3579};

/// @brief Field method_ptr, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  ___method_ptr;

/// @brief Field invoke_impl, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  ___invoke_impl;

/// @brief Field m_target, offset: 0x20, size: 0x8, def value: None
 ::System::Object*  ___m_target;

/// @brief Field method, offset: 0x28, size: 0x8, def value: None
 ::System::IntPtr  ___method;

/// @brief Field delegate_trampoline, offset: 0x30, size: 0x8, def value: None
 ::System::IntPtr  ___delegate_trampoline;

/// @brief Field extra_arg, offset: 0x38, size: 0x8, def value: None
 ::System::IntPtr  ___extra_arg;

/// @brief Field method_code, offset: 0x40, size: 0x8, def value: None
 ::System::IntPtr  ___method_code;

/// @brief Field interp_method, offset: 0x48, size: 0x8, def value: None
 ::System::IntPtr  ___interp_method;

/// @brief Field interp_invoke_impl, offset: 0x50, size: 0x8, def value: None
 ::System::IntPtr  ___interp_invoke_impl;

/// @brief Field method_info, offset: 0x58, size: 0x8, def value: None
 ::System::Reflection::MethodInfo*  ___method_info;

/// @brief Field original_method_info, offset: 0x60, size: 0x8, def value: None
 ::System::Reflection::MethodInfo*  ___original_method_info;

/// @brief Field data, offset: 0x68, size: 0x8, def value: None
 ::GlobalNamespace::UnsafeUtils__DelegateData*  ___data;

/// @brief Field method_is_virtual, offset: 0x70, size: 0x1, def value: None
 bool  ___method_is_virtual;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UnsafeUtils__DelegateFields, ___method_ptr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnsafeUtils__DelegateFields, ___invoke_impl) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnsafeUtils__DelegateFields, ___m_target) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnsafeUtils__DelegateFields, ___method) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnsafeUtils__DelegateFields, ___delegate_trampoline) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnsafeUtils__DelegateFields, ___extra_arg) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnsafeUtils__DelegateFields, ___method_code) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnsafeUtils__DelegateFields, ___interp_method) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnsafeUtils__DelegateFields, ___interp_invoke_impl) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnsafeUtils__DelegateFields, ___method_info) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnsafeUtils__DelegateFields, ___original_method_info) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnsafeUtils__DelegateFields, ___data) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnsafeUtils__DelegateFields, ___method_is_virtual) == 0x70, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UnsafeUtils__DelegateFields) == 0x78, "Size mismatch!");

} // namespace end def GlobalNamespace
