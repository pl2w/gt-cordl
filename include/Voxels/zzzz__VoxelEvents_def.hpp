#pragma once
// IWYU pragma private; include "Voxels/VoxelEvents.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VoxelEvents)
namespace GlobalNamespace {
class NetPlayer;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Vector3;
}
namespace Voxels {
class VoxelEvents_ResourcesMinedAuthorityDelegate;
}
namespace Voxels {
class VoxelEvents_ResourcesMinedDelegate;
}
namespace Voxels {
class VoxelWorld;
}
// Forward declare root types
namespace Voxels {
class VoxelEvents;
}
namespace Voxels {
class VoxelEvents_ResourcesMinedAuthorityDelegate;
}
namespace Voxels {
class VoxelEvents_ResourcesMinedDelegate;
}
// Write type traits
MARK_REF_T(::Voxels::VoxelEvents*);
MARK_REF_T(::Voxels::VoxelEvents_ResourcesMinedAuthorityDelegate*);
MARK_REF_T(::Voxels::VoxelEvents_ResourcesMinedDelegate*);
DEFINE_IL2CPP_CLASS(::Voxels::VoxelEvents*, "Voxels", "VoxelEvents");
DEFINE_IL2CPP_CLASS(::Voxels::VoxelEvents_ResourcesMinedAuthorityDelegate*, "Voxels", "VoxelEvents/ResourcesMinedAuthorityDelegate");
DEFINE_IL2CPP_CLASS(::Voxels::VoxelEvents_ResourcesMinedDelegate*, "Voxels", "VoxelEvents/ResourcesMinedDelegate");
// Dependencies System.Object
namespace Voxels {
// Is value type: false
// CS Name: Voxels.VoxelEvents
class CORDL_TYPE VoxelEvents : public ::System::Object {
public:
// Declarations
using ResourcesMinedAuthorityDelegate = ::Voxels::VoxelEvents_ResourcesMinedAuthorityDelegate;

using ResourcesMinedDelegate = ::Voxels::VoxelEvents_ResourcesMinedDelegate;

/// @brief Field OnResourcesMined, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnResourcesMined, put=setStaticF_OnResourcesMined)) ::Voxels::VoxelEvents_ResourcesMinedDelegate*  OnResourcesMined;

/// @brief Field OnResourcesMinedAuthority, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnResourcesMinedAuthority, put=setStaticF_OnResourcesMinedAuthority)) ::Voxels::VoxelEvents_ResourcesMinedAuthorityDelegate*  OnResourcesMinedAuthority;

/// @brief Method HandleResourceMined, addr 0x5dc3be4, size 0xf8, virtual false, abstract: false, final false
static inline void HandleResourceMined(::Voxels::VoxelWorld*  world, ::UnityEngine::Vector3  hitPoint, ::UnityEngine::Vector3  hitNormal, ::ArrayW<int32_t>  amounts) ;

/// @brief Method HandleResourceMinedAuthority, addr 0x5dc3b5c, size 0x88, virtual false, abstract: false, final false
static inline void HandleResourceMinedAuthority(::GlobalNamespace::NetPlayer*  player, ::Voxels::VoxelWorld*  world, ::ArrayW<int32_t>  amounts) ;

/// [CompilerGenerated]
/// @brief Method add_OnResourcesMined, addr 0x5dc39e4, size 0xbc, virtual false, abstract: false, final false
static inline void add_OnResourcesMined(::Voxels::VoxelEvents_ResourcesMinedDelegate*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnResourcesMinedAuthority, addr 0x5dc3874, size 0xb8, virtual false, abstract: false, final false
static inline void add_OnResourcesMinedAuthority(::Voxels::VoxelEvents_ResourcesMinedAuthorityDelegate*  value) ;

static inline ::Voxels::VoxelEvents_ResourcesMinedDelegate* getStaticF_OnResourcesMined() ;

static inline ::Voxels::VoxelEvents_ResourcesMinedAuthorityDelegate* getStaticF_OnResourcesMinedAuthority() ;

/// [CompilerGenerated]
/// @brief Method remove_OnResourcesMined, addr 0x5dc3aa0, size 0xbc, virtual false, abstract: false, final false
static inline void remove_OnResourcesMined(::Voxels::VoxelEvents_ResourcesMinedDelegate*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnResourcesMinedAuthority, addr 0x5dc392c, size 0xb8, virtual false, abstract: false, final false
static inline void remove_OnResourcesMinedAuthority(::Voxels::VoxelEvents_ResourcesMinedAuthorityDelegate*  value) ;

static inline void setStaticF_OnResourcesMined(::Voxels::VoxelEvents_ResourcesMinedDelegate*  value) ;

static inline void setStaticF_OnResourcesMinedAuthority(::Voxels::VoxelEvents_ResourcesMinedAuthorityDelegate*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoxelEvents() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoxelEvents", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoxelEvents(VoxelEvents && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoxelEvents", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoxelEvents(VoxelEvents const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5065};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Voxels::VoxelEvents) == 0x10, "Size mismatch!");

} // namespace end def Voxels
// Dependencies System.MulticastDelegate
namespace Voxels {
// Is value type: false
// CS Name: Voxels.VoxelEvents/ResourcesMinedDelegate
class CORDL_TYPE VoxelEvents_ResourcesMinedDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5dc40f0, size 0xc0, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::Voxels::VoxelWorld*  world, ::UnityEngine::Vector3  hitPoint, ::UnityEngine::Vector3  hitNormal, ::ArrayW<int32_t>  amounts, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5dc41b0, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5dc40dc, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::Voxels::VoxelWorld*  world, ::UnityEngine::Vector3  hitPoint, ::UnityEngine::Vector3  hitNormal, ::ArrayW<int32_t>  amounts) ;

static inline ::Voxels::VoxelEvents_ResourcesMinedDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5dc3fd0, size 0x10c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoxelEvents_ResourcesMinedDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoxelEvents_ResourcesMinedDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoxelEvents_ResourcesMinedDelegate(VoxelEvents_ResourcesMinedDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoxelEvents_ResourcesMinedDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoxelEvents_ResourcesMinedDelegate(VoxelEvents_ResourcesMinedDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5064};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Voxels::VoxelEvents_ResourcesMinedDelegate) == 0x80, "Size mismatch!");

} // namespace end def Voxels
// Dependencies System.MulticastDelegate
namespace Voxels {
// Is value type: false
// CS Name: Voxels.VoxelEvents/ResourcesMinedAuthorityDelegate
class CORDL_TYPE VoxelEvents_ResourcesMinedAuthorityDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5dc3f90, size 0x34, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::NetPlayer*  player, ::Voxels::VoxelWorld*  world, ::ArrayW<int32_t>  amounts, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5dc3fc4, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5dc3f7c, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::GlobalNamespace::NetPlayer*  player, ::Voxels::VoxelWorld*  world, ::ArrayW<int32_t>  amounts) ;

static inline ::Voxels::VoxelEvents_ResourcesMinedAuthorityDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5dc3e70, size 0x10c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoxelEvents_ResourcesMinedAuthorityDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoxelEvents_ResourcesMinedAuthorityDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoxelEvents_ResourcesMinedAuthorityDelegate(VoxelEvents_ResourcesMinedAuthorityDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoxelEvents_ResourcesMinedAuthorityDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoxelEvents_ResourcesMinedAuthorityDelegate(VoxelEvents_ResourcesMinedAuthorityDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5063};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Voxels::VoxelEvents_ResourcesMinedAuthorityDelegate) == 0x80, "Size mismatch!");

} // namespace end def Voxels
