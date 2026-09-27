#pragma once
// IWYU pragma private; include "GlobalNamespace/TriggerDefinition.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TriggerDefinition)
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
class TriggerDefinition;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TriggerDefinition*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TriggerDefinition*, "", "TriggerDefinition");
// Dependencies System.Object, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: TriggerDefinition
class CORDL_TYPE TriggerDefinition : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_env_id, put=set_env_id)) ::StringW  env_id;

 __declspec(property(get=get_id, put=set_id)) ::StringW  id;

 __declspec(property(get=get_name, put=set_name)) ::StringW  name;

 __declspec(property(get=get_prerequisite_entitlement_id, put=set_prerequisite_entitlement_id)) ::StringW  prerequisite_entitlement_id;

 __declspec(property(get=get_progression_amount, put=set_progression_amount)) int32_t  progression_amount;

/// @brief Field swigCMemOwn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_swigCMemOwn, put=__cordl_internal_set_swigCMemOwn)) bool  swigCMemOwn;

/// @brief Field swigCPtr, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_title_id, put=set_title_id)) ::StringW  title_id;

 __declspec(property(get=get_track_id, put=set_track_id)) ::StringW  track_id;

 __declspec(property(get=get_transaction_id, put=set_transaction_id)) ::StringW  transaction_id;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x5369b0c, size 0x6c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x5369c08, size 0x14c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x5369b78, size 0x90, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::GlobalNamespace::TriggerDefinition* New_ctor() ;

static inline ::GlobalNamespace::TriggerDefinition* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromString, addr 0x536aab4, size 0xe4, virtual false, abstract: false, final false
inline bool ParseFromString(::StringW  string_) ;

constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

constexpr bool& __cordl_internal_get_swigCMemOwn() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCMemOwn(bool  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x536ab98, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5365768, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x536564c, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::TriggerDefinition*  obj) ;

/// @brief Method get_env_id, addr 0x5369fd8, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_env_id() ;

/// @brief Method get_id, addr 0x5369e2c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_id() ;

/// @brief Method get_name, addr 0x536a330, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_name() ;

/// @brief Method get_prerequisite_entitlement_id, addr 0x536a834, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_prerequisite_entitlement_id() ;

/// @brief Method get_progression_amount, addr 0x536a9e0, size 0xd4, virtual false, abstract: false, final false
inline int32_t get_progression_amount() ;

/// @brief Method get_title_id, addr 0x536a184, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_title_id() ;

/// @brief Method get_track_id, addr 0x536a4dc, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_track_id() ;

/// @brief Method get_transaction_id, addr 0x536a688, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_transaction_id() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_env_id, addr 0x5369f00, size 0xd8, virtual false, abstract: false, final false
inline void set_env_id(::StringW  value) ;

/// @brief Method set_id, addr 0x5369d54, size 0xd8, virtual false, abstract: false, final false
inline void set_id(::StringW  value) ;

/// @brief Method set_name, addr 0x536a258, size 0xd8, virtual false, abstract: false, final false
inline void set_name(::StringW  value) ;

/// @brief Method set_prerequisite_entitlement_id, addr 0x536a75c, size 0xd8, virtual false, abstract: false, final false
inline void set_prerequisite_entitlement_id(::StringW  value) ;

/// @brief Method set_progression_amount, addr 0x536a908, size 0xd8, virtual false, abstract: false, final false
inline void set_progression_amount(int32_t  value) ;

/// @brief Method set_title_id, addr 0x536a0ac, size 0xd8, virtual false, abstract: false, final false
inline void set_title_id(::StringW  value) ;

/// @brief Method set_track_id, addr 0x536a404, size 0xd8, virtual false, abstract: false, final false
inline void set_track_id(::StringW  value) ;

/// @brief Method set_transaction_id, addr 0x536a5b0, size 0xd8, virtual false, abstract: false, final false
inline void set_transaction_id(::StringW  value) ;

/// @brief Method swigRelease, addr 0x5369a74, size 0x98, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::TriggerDefinition*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TriggerDefinition() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TriggerDefinition", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TriggerDefinition(TriggerDefinition && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TriggerDefinition", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TriggerDefinition(TriggerDefinition const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9610};

/// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
 bool  ___swigCMemOwn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TriggerDefinition, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TriggerDefinition, ___swigCMemOwn) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TriggerDefinition) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
