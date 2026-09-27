#pragma once
// IWYU pragma private; include "Pathfinding/RichPath.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RichPath)
namespace Pathfinding::Util {
class ITransform;
}
namespace Pathfinding {
class Path;
}
namespace Pathfinding {
class RichPathPart;
}
namespace Pathfinding {
class Seeker;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Pathfinding {
class RichPath;
}
// Write type traits
MARK_REF_T(::Pathfinding::RichPath*);
DEFINE_IL2CPP_CLASS(::Pathfinding::RichPath*, "Pathfinding", "RichPath");
// Dependencies System.Object, UnityEngine.Vector3
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.RichPath
class CORDL_TYPE RichPath : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_CompletedAllParts)) bool  CompletedAllParts;

 __declspec(property(get=get_Endpoint, put=set_Endpoint)) ::UnityEngine::Vector3  Endpoint;

 __declspec(property(get=get_IsLastPart)) bool  IsLastPart;

/// @brief Field <Endpoint>k__BackingField, offset 0x30, size 0xc 
 __declspec(property(get=__cordl_internal_get__Endpoint_k__BackingField, put=__cordl_internal_set__Endpoint_k__BackingField)) ::UnityEngine::Vector3  _Endpoint_k__BackingField;

/// @brief Field currentPart, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentPart, put=__cordl_internal_set_currentPart)) int32_t  currentPart;

/// @brief Field parts, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_parts, put=__cordl_internal_set_parts)) ::System::Collections::Generic::List_1<::Pathfinding::RichPathPart*>*  parts;

/// @brief Field seeker, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_seeker, put=__cordl_internal_set_seeker)) ::UnityW<::Pathfinding::Seeker>  seeker;

/// @brief Field transform, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_transform, put=__cordl_internal_set_transform)) ::Pathfinding::Util::ITransform*  transform;

/// @brief Method Clear, addr 0x5e40328, size 0x7c, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method GetCurrentPart, addr 0x5e3f06c, size 0x84, virtual false, abstract: false, final false
inline ::Pathfinding::RichPathPart* GetCurrentPart() ;

/// @brief Method GetRemainingPath, addr 0x5e40474, size 0x228, virtual false, abstract: false, final false
inline void GetRemainingPath(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  buffer, ::UnityEngine::Vector3  currentPosition, ::by_ref<bool>  requiresRepath) ;

/// @brief Method Initialize, addr 0x5e3f914, size 0x978, virtual false, abstract: false, final false
inline void Initialize(::Pathfinding::Seeker*  seeker, ::Pathfinding::Path*  path, bool  mergePartEndpoints, bool  simplificationMode) ;

static inline ::Pathfinding::RichPath* New_ctor() ;

/// @brief Method NextPart, addr 0x5e403f8, size 0x5c, virtual false, abstract: false, final false
inline void NextPart() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__Endpoint_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__Endpoint_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get_currentPart() const;

constexpr int32_t& __cordl_internal_get_currentPart() ;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::RichPathPart*>* const& __cordl_internal_get_parts() const;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::RichPathPart*>*& __cordl_internal_get_parts() ;

constexpr ::UnityW<::Pathfinding::Seeker> const& __cordl_internal_get_seeker() const;

constexpr ::UnityW<::Pathfinding::Seeker>& __cordl_internal_get_seeker() ;

constexpr ::Pathfinding::Util::ITransform* const& __cordl_internal_get_transform() const;

constexpr ::Pathfinding::Util::ITransform*& __cordl_internal_get_transform() ;

constexpr void __cordl_internal_set__Endpoint_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_currentPart(int32_t  value) ;

constexpr void __cordl_internal_set_parts(::System::Collections::Generic::List_1<::Pathfinding::RichPathPart*>*  value) ;

constexpr void __cordl_internal_set_seeker(::UnityW<::Pathfinding::Seeker>  value) ;

constexpr void __cordl_internal_set_transform(::Pathfinding::Util::ITransform*  value) ;

/// @brief Method .ctor, addr 0x5e42a70, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CompletedAllParts, addr 0x5e403a4, size 0x54, virtual false, abstract: false, final false
inline bool get_CompletedAllParts() ;

/// [CompilerGenerated]
/// @brief Method get_Endpoint, addr 0x5e437c0, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_Endpoint() ;

/// @brief Method get_IsLastPart, addr 0x5e3f1f4, size 0x58, virtual false, abstract: false, final false
inline bool get_IsLastPart() ;

/// [CompilerGenerated]
/// @brief Method set_Endpoint, addr 0x5e437cc, size 0xc, virtual false, abstract: false, final false
inline void set_Endpoint(::UnityEngine::Vector3  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RichPath() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RichPath", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RichPath(RichPath && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RichPath", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RichPath(RichPath const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21182};

/// @brief Field currentPart, offset: 0x10, size: 0x4, def value: None
 int32_t  ___currentPart;

/// @brief Field parts, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Pathfinding::RichPathPart*>*  ___parts;

/// @brief Field seeker, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Pathfinding::Seeker>  ___seeker;

/// @brief Field transform, offset: 0x28, size: 0x8, def value: None
 ::Pathfinding::Util::ITransform*  ___transform;

/// [CompilerGenerated]
/// @brief Field <Endpoint>k__BackingField, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____Endpoint_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::RichPath, ___currentPart) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RichPath, ___parts) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RichPath, ___seeker) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RichPath, ___transform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RichPath, ____Endpoint_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::RichPath) == 0x40, "Size mismatch!");

} // namespace end def Pathfinding
