#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipServerKey.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MothershipServerKey)
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
class MothershipServerKey;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipServerKey*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipServerKey*, "", "MothershipServerKey");
// Dependencies System.Object, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipServerKey
class CORDL_TYPE MothershipServerKey : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_key_id, put=set_key_id)) ::StringW  key_id;

 __declspec(property(get=get_key_name, put=set_key_name)) ::StringW  key_name;

 __declspec(property(get=get_secret, put=set_secret)) ::StringW  secret;

/// @brief Field swigCMemOwn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_swigCMemOwn, put=__cordl_internal_set_swigCMemOwn)) bool  swigCMemOwn;

/// @brief Field swigCPtr, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x52c4b60, size 0x6c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x52c4c5c, size 0x14c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x52c4bcc, size 0x90, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::GlobalNamespace::MothershipServerKey* New_ctor() ;

static inline ::GlobalNamespace::MothershipServerKey* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromString, addr 0x52c52ac, size 0xe4, virtual false, abstract: false, final false
inline bool ParseFromString(::StringW  response) ;

constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

constexpr bool& __cordl_internal_get_swigCMemOwn() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCMemOwn(bool  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x52c5390, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x52c4a28, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x52c4a88, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::MothershipServerKey*  obj) ;

/// @brief Method get_key_id, addr 0x52c4e80, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_key_id() ;

/// @brief Method get_key_name, addr 0x52c502c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_key_name() ;

/// @brief Method get_secret, addr 0x52c51d8, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_secret() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_key_id, addr 0x52c4da8, size 0xd8, virtual false, abstract: false, final false
inline void set_key_id(::StringW  value) ;

/// @brief Method set_key_name, addr 0x52c4f54, size 0xd8, virtual false, abstract: false, final false
inline void set_key_name(::StringW  value) ;

/// @brief Method set_secret, addr 0x52c5100, size 0xd8, virtual false, abstract: false, final false
inline void set_secret(::StringW  value) ;

/// @brief Method swigRelease, addr 0x52c4ac8, size 0x98, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::MothershipServerKey*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipServerKey() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipServerKey", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipServerKey(MothershipServerKey && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipServerKey", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipServerKey(MothershipServerKey const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9369};

/// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
 bool  ___swigCMemOwn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MothershipServerKey, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MothershipServerKey, ___swigCMemOwn) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MothershipServerKey) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
