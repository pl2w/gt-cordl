#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Layouts/InputDeviceDescription.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputDeviceDescription)
namespace GlobalNamespace {
struct InputDeviceDescription_DeviceDescriptionJson;
}
namespace GlobalNamespace {
struct JsonParser_JsonString;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Layouts {
struct InputDeviceDescription;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::Layouts::InputDeviceDescription);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::Layouts::InputDeviceDescription, "UnityEngine.InputSystem.Layouts", "InputDeviceDescription");
// Dependencies 
namespace UnityEngine::InputSystem::Layouts {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct CORDL_TYPE InputDeviceDescription {
public:
// Declarations
using DeviceDescriptionJson = ::GlobalNamespace::InputDeviceDescription_DeviceDescriptionJson;

 __declspec(property(get=get_capabilities, put=set_capabilities)) ::StringW  capabilities;

 __declspec(property(get=get_deviceClass, put=set_deviceClass)) ::StringW  deviceClass;

 __declspec(property(get=get_empty)) bool  empty;

 __declspec(property(get=get_interfaceName, put=set_interfaceName)) ::StringW  interfaceName;

 __declspec(property(get=get_manufacturer, put=set_manufacturer)) ::StringW  manufacturer;

 __declspec(property(get=get_product, put=set_product)) ::StringW  product;

 __declspec(property(get=get_serial, put=set_serial)) ::StringW  serial;

 __declspec(property(get=get_version, put=set_version)) ::StringW  version;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>*() ;

/// @brief Method ComparePropertyToDeviceDescriptor, addr 0xaf32628, size 0xb0, virtual false, abstract: false, final false
static inline bool ComparePropertyToDeviceDescriptor(::StringW  propertyName, ::GlobalNamespace::JsonParser_JsonString  propertyValue, ::StringW  deviceDescriptor) ;

/// @brief Method Equals, addr 0xaf32178, size 0x98, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0xaf320c8, size 0xb0, virtual true, abstract: false, final true
inline bool Equals(::UnityEngine::InputSystem::Layouts::InputDeviceDescription  other) ;

/// @brief Method FromJson, addr 0xaf324b0, size 0x178, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::Layouts::InputDeviceDescription FromJson(::StringW  json) ;

/// @brief Method GetHashCode, addr 0xaf32210, size 0x130, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToJson, addr 0xaf323b4, size 0xfc, virtual false, abstract: false, final false
inline ::StringW ToJson() ;

/// @brief Method ToString, addr 0xaf31e1c, size 0x2ac, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method get_capabilities, addr 0xaf31d88, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_capabilities() ;

/// @brief Method get_deviceClass, addr 0xaf31d38, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_deviceClass() ;

/// @brief Method get_empty, addr 0xaf31d98, size 0x84, virtual false, abstract: false, final false
inline bool get_empty() ;

/// @brief Method get_interfaceName, addr 0xaf31d28, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_interfaceName() ;

/// @brief Method get_manufacturer, addr 0xaf31d48, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_manufacturer() ;

/// @brief Method get_product, addr 0xaf31d58, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_product() ;

/// @brief Method get_serial, addr 0xaf31d68, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_serial() ;

/// @brief Method get_version, addr 0xaf31d78, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_version() ;

/// @brief Convert to "::System::IEquatable_1<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>"
constexpr ::System::IEquatable_1<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>* i___System__IEquatable_1___UnityEngine__InputSystem__Layouts__InputDeviceDescription_() ;

/// @brief Method op_Equality, addr 0xaf32340, size 0x38, virtual false, abstract: false, final false
static inline bool op_Equality(::UnityEngine::InputSystem::Layouts::InputDeviceDescription  left, ::UnityEngine::InputSystem::Layouts::InputDeviceDescription  right) ;

/// @brief Method op_Inequality, addr 0xaf32378, size 0x3c, virtual false, abstract: false, final false
static inline bool op_Inequality(::UnityEngine::InputSystem::Layouts::InputDeviceDescription  left, ::UnityEngine::InputSystem::Layouts::InputDeviceDescription  right) ;

/// @brief Method set_capabilities, addr 0xaf31d90, size 0x8, virtual false, abstract: false, final false
inline void set_capabilities(::StringW  value) ;

/// @brief Method set_deviceClass, addr 0xaf31d40, size 0x8, virtual false, abstract: false, final false
inline void set_deviceClass(::StringW  value) ;

/// @brief Method set_interfaceName, addr 0xaf31d30, size 0x8, virtual false, abstract: false, final false
inline void set_interfaceName(::StringW  value) ;

/// @brief Method set_manufacturer, addr 0xaf31d50, size 0x8, virtual false, abstract: false, final false
inline void set_manufacturer(::StringW  value) ;

/// @brief Method set_product, addr 0xaf31d60, size 0x8, virtual false, abstract: false, final false
inline void set_product(::StringW  value) ;

/// @brief Method set_serial, addr 0xaf31d70, size 0x8, virtual false, abstract: false, final false
inline void set_serial(::StringW  value) ;

/// @brief Method set_version, addr 0xaf31d80, size 0x8, virtual false, abstract: false, final false
inline void set_version(::StringW  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr InputDeviceDescription() ;

// Ctor Parameters [CppParam { name: "m_InterfaceName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_DeviceClass", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Manufacturer", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Product", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Serial", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Version", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Capabilities", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr InputDeviceDescription(::StringW  m_InterfaceName, ::StringW  m_DeviceClass, ::StringW  m_Manufacturer, ::StringW  m_Product, ::StringW  m_Serial, ::StringW  m_Version, ::StringW  m_Capabilities) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13844};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// [SerializeField]
/// @brief Field m_InterfaceName, offset: 0x0, size: 0x8, def value: None
 ::StringW  m_InterfaceName;

/// [SerializeField]
/// @brief Field m_DeviceClass, offset: 0x8, size: 0x8, def value: None
 ::StringW  m_DeviceClass;

/// [SerializeField]
/// @brief Field m_Manufacturer, offset: 0x10, size: 0x8, def value: None
 ::StringW  m_Manufacturer;

/// [SerializeField]
/// @brief Field m_Product, offset: 0x18, size: 0x8, def value: None
 ::StringW  m_Product;

/// [SerializeField]
/// @brief Field m_Serial, offset: 0x20, size: 0x8, def value: None
 ::StringW  m_Serial;

/// [SerializeField]
/// @brief Field m_Version, offset: 0x28, size: 0x8, def value: None
 ::StringW  m_Version;

/// [SerializeField]
/// @brief Field m_Capabilities, offset: 0x30, size: 0x8, def value: None
 ::StringW  m_Capabilities;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputDeviceDescription, m_InterfaceName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputDeviceDescription, m_DeviceClass) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputDeviceDescription, m_Manufacturer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputDeviceDescription, m_Product) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputDeviceDescription, m_Serial) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputDeviceDescription, m_Version) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputDeviceDescription, m_Capabilities) == 0x30, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::InputSystem::Layouts::InputDeviceDescription) == 0x38, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Layouts
