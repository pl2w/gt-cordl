#pragma once
// IWYU pragma private; include "UnityEngine/Accessibility/ServiceManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Accessibility/zzzz__IService_def.hpp"
CORDL_MODULE_EXPORT(ServiceManager)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
namespace System {
class Type;
}
namespace UnityEngine::Accessibility {
class IService;
}
// Forward declare root types
namespace UnityEngine::Accessibility {
class ServiceManager;
}
// Write type traits
MARK_REF_T(::UnityEngine::Accessibility::ServiceManager*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Accessibility::ServiceManager*, "UnityEngine.Accessibility", "ServiceManager");
// Dependencies System.Object, UnityEngine.Accessibility.IService
namespace UnityEngine::Accessibility {
// Is value type: false
// CS Name: UnityEngine.Accessibility.ServiceManager
class CORDL_TYPE ServiceManager : public ::System::Object {
public:
// Declarations
/// @brief Field m_Services, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Services, put=__cordl_internal_set_m_Services)) ::System::Collections::Generic::IDictionary_2<::System::Type*,::UnityEngine::Accessibility::IService*>*  m_Services;

/// @brief Method GetService, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Accessibility::IService*>)
inline T GetService() ;

static inline ::UnityEngine::Accessibility::ServiceManager* New_ctor() ;

/// @brief Method ScreenReaderStatusChanged, addr 0xb51d758, size 0x4, virtual false, abstract: false, final false
inline void ScreenReaderStatusChanged(bool  isScreenReaderEnabled) ;

/// @brief Method StopService, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Accessibility::IService*>)
inline void StopService() ;

/// @brief Method UpdateServices, addr 0xb51d554, size 0x204, virtual false, abstract: false, final false
inline void UpdateServices(bool  isScreenReaderEnabled) ;

constexpr ::System::Collections::Generic::IDictionary_2<::System::Type*,::UnityEngine::Accessibility::IService*>* const& __cordl_internal_get_m_Services() const;

constexpr ::System::Collections::Generic::IDictionary_2<::System::Type*,::UnityEngine::Accessibility::IService*>*& __cordl_internal_get_m_Services() ;

constexpr void __cordl_internal_set_m_Services(::System::Collections::Generic::IDictionary_2<::System::Type*,::UnityEngine::Accessibility::IService*>*  value) ;

/// @brief Method .ctor, addr 0xb51c494, size 0x168, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ServiceManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ServiceManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ServiceManager(ServiceManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ServiceManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ServiceManager(ServiceManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32541};

/// @brief Field m_Services, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::IDictionary_2<::System::Type*,::UnityEngine::Accessibility::IService*>*  ___m_Services;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Accessibility::ServiceManager, ___m_Services) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Accessibility::ServiceManager) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Accessibility
