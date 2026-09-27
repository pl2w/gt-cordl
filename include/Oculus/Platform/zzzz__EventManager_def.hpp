#pragma once
// IWYU pragma private; include "Oculus/Platform/EventManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(EventManager)
// Forward declare root types
namespace Oculus::Platform {
class EventManager;
}
// Write type traits
MARK_REF_T(::Oculus::Platform::EventManager*);
DEFINE_IL2CPP_CLASS(::Oculus::Platform::EventManager*, "Oculus.Platform", "EventManager");
// Dependencies System.Object
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.EventManager
class CORDL_TYPE EventManager : public ::System::Object {
public:
// Declarations
/// @brief Field projectGUID, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_projectGUID, put=setStaticF_projectGUID)) ::StringW  projectGUID;

/// @brief Field projectName, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_projectName, put=setStaticF_projectName)) ::StringW  projectName;

static inline ::Oculus::Platform::EventManager* New_ctor() ;

/// @brief Method SendUnifiedEvent, addr 0xa539440, size 0x4, virtual false, abstract: false, final false
static inline void SendUnifiedEvent(bool  isEssential, ::StringW  productType, ::StringW  eventName, ::StringW  event_metadata_json, ::StringW  event_entrypoint, ::StringW  event_type, ::StringW  event_target, ::StringW  error_msg, ::StringW  is_internal) ;

/// @brief Method .ctor, addr 0xa539444, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::StringW getStaticF_projectGUID() ;

static inline ::StringW getStaticF_projectName() ;

static inline void setStaticF_projectGUID(::StringW  value) ;

static inline void setStaticF_projectName(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EventManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EventManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EventManager(EventManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EventManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EventManager(EventManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26764};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Platform::EventManager) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Platform
