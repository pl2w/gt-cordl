#pragma once
// IWYU pragma private; include "GlobalNamespace/PrerequisiteLevel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PrerequisiteLevel)
namespace GlobalNamespace {
class SWIGTYPE_p_rapidjson__Document;
}
namespace GlobalNamespace {
class SWIGTYPE_p_rapidjson__Value;
}
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
class PrerequisiteLevel;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PrerequisiteLevel*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PrerequisiteLevel*, "", "PrerequisiteLevel");
// Dependencies System.Object, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: PrerequisiteLevel
class CORDL_TYPE PrerequisiteLevel : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_level_id, put=set_level_id)) ::StringW  level_id;

 __declspec(property(get=get_level_name, put=set_level_name)) ::StringW  level_name;

 __declspec(property(get=get_required_progression, put=set_required_progression)) int32_t  required_progression;

/// @brief Field swigCMemOwn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_swigCMemOwn, put=__cordl_internal_set_swigCMemOwn)) bool  swigCMemOwn;

/// @brief Field swigCPtr, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_track_id, put=set_track_id)) ::StringW  track_id;

 __declspec(property(get=get_track_name, put=set_track_name)) ::StringW  track_name;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x52fa128, size 0x6c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x52fa224, size 0x14c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x52fa194, size 0x90, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::GlobalNamespace::PrerequisiteLevel* New_ctor() ;

static inline ::GlobalNamespace::PrerequisiteLevel* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromString, addr 0x52fabcc, size 0xe4, virtual false, abstract: false, final false
inline bool ParseFromString(::StringW  response) ;

/// @brief Method ToJson, addr 0x52facb0, size 0x124, virtual false, abstract: false, final false
inline bool ToJson(::GlobalNamespace::SWIGTYPE_p_rapidjson__Value*  prerequisiteLevel, ::GlobalNamespace::SWIGTYPE_p_rapidjson__Document*  body) ;

constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

constexpr bool& __cordl_internal_get_swigCMemOwn() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCMemOwn(bool  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x52fadd4, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x52f9ff0, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x52fa050, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::PrerequisiteLevel*  obj) ;

/// @brief Method get_level_id, addr 0x52fa5f4, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_level_id() ;

/// @brief Method get_level_name, addr 0x52fa94c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_level_name() ;

/// @brief Method get_required_progression, addr 0x52faaf8, size 0xd4, virtual false, abstract: false, final false
inline int32_t get_required_progression() ;

/// @brief Method get_track_id, addr 0x52fa448, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_track_id() ;

/// @brief Method get_track_name, addr 0x52fa7a0, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_track_name() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_level_id, addr 0x52fa51c, size 0xd8, virtual false, abstract: false, final false
inline void set_level_id(::StringW  value) ;

/// @brief Method set_level_name, addr 0x52fa874, size 0xd8, virtual false, abstract: false, final false
inline void set_level_name(::StringW  value) ;

/// @brief Method set_required_progression, addr 0x52faa20, size 0xd8, virtual false, abstract: false, final false
inline void set_required_progression(int32_t  value) ;

/// @brief Method set_track_id, addr 0x52fa370, size 0xd8, virtual false, abstract: false, final false
inline void set_track_id(::StringW  value) ;

/// @brief Method set_track_name, addr 0x52fa6c8, size 0xd8, virtual false, abstract: false, final false
inline void set_track_name(::StringW  value) ;

/// @brief Method swigRelease, addr 0x52fa090, size 0x98, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::PrerequisiteLevel*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PrerequisiteLevel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PrerequisiteLevel", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PrerequisiteLevel(PrerequisiteLevel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PrerequisiteLevel", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PrerequisiteLevel(PrerequisiteLevel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9433};

/// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
 bool  ___swigCMemOwn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PrerequisiteLevel, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrerequisiteLevel, ___swigCMemOwn) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PrerequisiteLevel) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
