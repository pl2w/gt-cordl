#pragma once
// IWYU pragma private; include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Delegate_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MulticastDelegate)
namespace System::Reflection {
class MethodInfo;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Delegate;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System {
class MulticastDelegate;
}
// Write type traits
MARK_REF_T(::System::MulticastDelegate*);
DEFINE_IL2CPP_CLASS(::System::MulticastDelegate*, "System", "MulticastDelegate");
// [ComVisible(true)]
// Dependencies System.Delegate
namespace System {
// Is value type: false
// CS Name: System.MulticastDelegate
class CORDL_TYPE MulticastDelegate : public ::System::Delegate {
public:
// Declarations
/// @brief Field delegates, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_delegates, put=__cordl_internal_set_delegates)) ::ArrayW<::System::Delegate*>  delegates;

/// @brief Method CombineImpl, addr 0xa32fec4, size 0x2d0, virtual true, abstract: false, final true
inline ::System::Delegate* CombineImpl(::System::Delegate*  follow) ;

/// @brief Method DynamicInvokeImpl, addr 0xa32fbe4, size 0x98, virtual true, abstract: false, final true
inline ::System::Object* DynamicInvokeImpl(::ArrayW<::System::Object*>  args) ;

/// @brief Method Equals, addr 0xa32fc7c, size 0x124, virtual true, abstract: false, final true
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode, addr 0xa32fda0, size 0x4, virtual true, abstract: false, final true
inline int32_t GetHashCode() ;

/// @brief Method GetInvocationList, addr 0xa32fdec, size 0xd8, virtual true, abstract: false, final true
inline ::ArrayW<::System::Delegate*> GetInvocationList() ;

/// @brief Method GetMethodImpl, addr 0xa32fda4, size 0x48, virtual true, abstract: false, final false
inline ::System::Reflection::MethodInfo* GetMethodImpl() ;

/// @brief Method GetObjectData, addr 0xa32fbe0, size 0x4, virtual true, abstract: false, final false
inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method LastIndexOf, addr 0xa330194, size 0x12c, virtual false, abstract: false, final false
inline int32_t LastIndexOf(::ArrayW<::System::Delegate*>  haystack, ::ArrayW<::System::Delegate*>  needle) ;

/// @brief Method RemoveImpl, addr 0xa3302c0, size 0x2fc, virtual true, abstract: false, final true
inline ::System::Delegate* RemoveImpl(::System::Delegate*  value) ;

constexpr ::ArrayW<::System::Delegate*> const& __cordl_internal_get_delegates() const;

constexpr ::ArrayW<::System::Delegate*>& __cordl_internal_get_delegates() ;

constexpr void __cordl_internal_set_delegates(::ArrayW<::System::Delegate*>  value) ;

/// @brief Method op_Equality, addr 0xa3305bc, size 0x1c, virtual false, abstract: false, final false
static inline bool op_Equality(::System::MulticastDelegate*  d1, ::System::MulticastDelegate*  d2) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MulticastDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MulticastDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MulticastDelegate(MulticastDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MulticastDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MulticastDelegate(MulticastDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5735};

/// @brief Field delegates, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<::System::Delegate*>  ___delegates;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::MulticastDelegate, ___delegates) == 0x78, "Offset mismatch!");

static_assert(sizeof(::System::MulticastDelegate) == 0x80, "Size mismatch!");

} // namespace end def System
