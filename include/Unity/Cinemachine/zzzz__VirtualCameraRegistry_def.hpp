#pragma once
// IWYU pragma private; include "Unity/Cinemachine/VirtualCameraRegistry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VirtualCameraRegistry)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Comparison_1;
}
namespace Unity::Cinemachine {
class CinemachineVirtualCameraBase;
}
namespace Unity::Cinemachine {
class VirtualCameraRegistry___c;
}
// Forward declare root types
namespace Unity::Cinemachine {
class VirtualCameraRegistry;
}
namespace Unity::Cinemachine {
class VirtualCameraRegistry___c;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::VirtualCameraRegistry*);
MARK_REF_T(::Unity::Cinemachine::VirtualCameraRegistry___c*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::VirtualCameraRegistry*, "Unity.Cinemachine", "VirtualCameraRegistry");
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::VirtualCameraRegistry___c*, "Unity.Cinemachine", "VirtualCameraRegistry/<>c");
// Dependencies System.Object
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.VirtualCameraRegistry
class CORDL_TYPE VirtualCameraRegistry : public ::System::Object {
public:
// Declarations
using __c = ::Unity::Cinemachine::VirtualCameraRegistry___c;

 __declspec(property(get=get_ActiveCameraCount)) int32_t  ActiveCameraCount;

 __declspec(property(get=get_AllCamerasSortedByNestingLevel)) ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>>*>*  AllCamerasSortedByNestingLevel;

/// @brief Field m_ActivationSequence, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ActivationSequence, put=__cordl_internal_set_m_ActivationSequence)) int32_t  m_ActivationSequence;

/// @brief Field m_ActiveCameras, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ActiveCameras, put=__cordl_internal_set_m_ActiveCameras)) ::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>>*  m_ActiveCameras;

/// @brief Field m_ActiveCamerasAreSorted, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ActiveCamerasAreSorted, put=__cordl_internal_set_m_ActiveCamerasAreSorted)) bool  m_ActiveCamerasAreSorted;

/// @brief Field m_AllCameras, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AllCameras, put=__cordl_internal_set_m_AllCameras)) ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>>*>*  m_AllCameras;

/// @brief Method AddActiveCamera, addr 0xaec25f0, size 0xc4, virtual false, abstract: false, final false
inline void AddActiveCamera(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam) ;

/// @brief Method CameraDestroyed, addr 0xaec2744, size 0x90, virtual false, abstract: false, final false
inline void CameraDestroyed(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam) ;

/// @brief Method CameraDisabled, addr 0xaec2a48, size 0xb0, virtual false, abstract: false, final false
inline void CameraDisabled(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam) ;

/// @brief Method CameraEnabled, addr 0xaec27d4, size 0x274, virtual false, abstract: false, final false
inline void CameraEnabled(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam) ;

/// @brief Method GetActiveCamera, addr 0xaec2490, size 0x160, virtual false, abstract: false, final false
inline ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase> GetActiveCamera(int32_t  index) ;

static inline ::Unity::Cinemachine::VirtualCameraRegistry* New_ctor() ;

/// @brief Method RemoveActiveCamera, addr 0xaec26b4, size 0x90, virtual false, abstract: false, final false
inline void RemoveActiveCamera(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam) ;

constexpr int32_t const& __cordl_internal_get_m_ActivationSequence() const;

constexpr int32_t& __cordl_internal_get_m_ActivationSequence() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>>* const& __cordl_internal_get_m_ActiveCameras() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>>*& __cordl_internal_get_m_ActiveCameras() ;

constexpr bool const& __cordl_internal_get_m_ActiveCamerasAreSorted() const;

constexpr bool& __cordl_internal_get_m_ActiveCamerasAreSorted() ;

constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>>*>* const& __cordl_internal_get_m_AllCameras() const;

constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>>*>*& __cordl_internal_get_m_AllCameras() ;

constexpr void __cordl_internal_set_m_ActivationSequence(int32_t  value) ;

constexpr void __cordl_internal_set_m_ActiveCameras(::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>>*  value) ;

constexpr void __cordl_internal_set_m_ActiveCamerasAreSorted(bool  value) ;

constexpr void __cordl_internal_set_m_AllCameras(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>>*>*  value) ;

/// @brief Method .ctor, addr 0xaec2af8, size 0xdc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ActiveCameraCount, addr 0xaec2448, size 0x48, virtual false, abstract: false, final false
inline int32_t get_ActiveCameraCount() ;

/// @brief Method get_AllCamerasSortedByNestingLevel, addr 0xaec2440, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>>*>* get_AllCamerasSortedByNestingLevel() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VirtualCameraRegistry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VirtualCameraRegistry", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VirtualCameraRegistry(VirtualCameraRegistry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VirtualCameraRegistry", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VirtualCameraRegistry(VirtualCameraRegistry const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22383};

/// @brief Field m_ActiveCameras, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>>*  ___m_ActiveCameras;

/// @brief Field m_AllCameras, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>>*>*  ___m_AllCameras;

/// @brief Field m_ActiveCamerasAreSorted, offset: 0x20, size: 0x1, def value: None
 bool  ___m_ActiveCamerasAreSorted;

/// @brief Field m_ActivationSequence, offset: 0x24, size: 0x4, def value: None
 int32_t  ___m_ActivationSequence;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::VirtualCameraRegistry, ___m_ActiveCameras) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::VirtualCameraRegistry, ___m_AllCameras) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::VirtualCameraRegistry, ___m_ActiveCamerasAreSorted) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::VirtualCameraRegistry, ___m_ActivationSequence) == 0x24, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::VirtualCameraRegistry) == 0x28, "Size mismatch!");

} // namespace end def Unity::Cinemachine
// [CompilerGenerated]
// Dependencies System.Object
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.VirtualCameraRegistry/<>c
class CORDL_TYPE VirtualCameraRegistry___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Unity::Cinemachine::VirtualCameraRegistry___c*  __9;

/// @brief Field <>9__8_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__8_0, put=setStaticF___9__8_0)) ::System::Comparison_1<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>>*  __9__8_0;

static inline ::Unity::Cinemachine::VirtualCameraRegistry___c* New_ctor() ;

/// @brief Method <GetActiveCamera>b__8_0, addr 0xaec2c44, size 0xa0, virtual false, abstract: false, final false
inline int32_t _GetActiveCamera_b__8_0(::Unity::Cinemachine::CinemachineVirtualCameraBase*  x, ::Unity::Cinemachine::CinemachineVirtualCameraBase*  y) ;

/// @brief Method .ctor, addr 0xaec2c3c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Unity::Cinemachine::VirtualCameraRegistry___c* getStaticF___9() ;

static inline ::System::Comparison_1<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>>* getStaticF___9__8_0() ;

static inline void setStaticF___9(::Unity::Cinemachine::VirtualCameraRegistry___c*  value) ;

static inline void setStaticF___9__8_0(::System::Comparison_1<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VirtualCameraRegistry___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VirtualCameraRegistry___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VirtualCameraRegistry___c(VirtualCameraRegistry___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VirtualCameraRegistry___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VirtualCameraRegistry___c(VirtualCameraRegistry___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22382};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Cinemachine::VirtualCameraRegistry___c) == 0x10, "Size mismatch!");

} // namespace end def Unity::Cinemachine
