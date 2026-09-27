#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/UndoBlock.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UndoBlock)
namespace System {
class IDisposable;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Unity::XR::CoreUtils {
class UndoBlock;
}
// Write type traits
MARK_REF_T(::Unity::XR::CoreUtils::UndoBlock*);
DEFINE_IL2CPP_CLASS(::Unity::XR::CoreUtils::UndoBlock*, "Unity.XR.CoreUtils", "UndoBlock");
// Dependencies System.Object, UnityEngine.Component
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: Unity.XR.CoreUtils.UndoBlock
class CORDL_TYPE UndoBlock : public ::System::Object {
public:
// Declarations
/// @brief Field m_DisposedValue, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_DisposedValue, put=__cordl_internal_set_m_DisposedValue)) bool  m_DisposedValue;

/// @brief Field m_UndoGroup, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_UndoGroup, put=__cordl_internal_set_m_UndoGroup)) int32_t  m_UndoGroup;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method AddComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline T AddComponent(::UnityEngine::GameObject*  gameObject) ;

/// @brief Method Dispose, addr 0xb3fab94, size 0x10, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0xb3fab7c, size 0x18, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::Unity::XR::CoreUtils::UndoBlock* New_ctor(::StringW  undoLabel, bool  testMode) ;

/// @brief Method RecordObject, addr 0xb3fab5c, size 0x4, virtual false, abstract: false, final false
inline void RecordObject(::UnityEngine::Object*  objectToUndo) ;

/// @brief Method RegisterCreatedObject, addr 0xb3fab58, size 0x4, virtual false, abstract: false, final false
inline void RegisterCreatedObject(::UnityEngine::Object*  objectToUndo) ;

/// @brief Method SetTransformParent, addr 0xb3fab60, size 0x1c, virtual false, abstract: false, final false
inline void SetTransformParent(::UnityEngine::Transform*  transform, ::UnityEngine::Transform*  newParent) ;

constexpr bool const& __cordl_internal_get_m_DisposedValue() const;

constexpr bool& __cordl_internal_get_m_DisposedValue() ;

constexpr int32_t const& __cordl_internal_get_m_UndoGroup() const;

constexpr int32_t& __cordl_internal_get_m_UndoGroup() ;

constexpr void __cordl_internal_set_m_DisposedValue(bool  value) ;

constexpr void __cordl_internal_set_m_UndoGroup(int32_t  value) ;

/// @brief Method .ctor, addr 0xb3fab38, size 0x20, virtual false, abstract: false, final false
inline void _ctor(::StringW  undoLabel, bool  testMode) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UndoBlock() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UndoBlock", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UndoBlock(UndoBlock && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UndoBlock", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UndoBlock(UndoBlock const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30432};

/// @brief Field m_UndoGroup, offset: 0x10, size: 0x4, def value: None
 int32_t  ___m_UndoGroup;

/// @brief Field m_DisposedValue, offset: 0x14, size: 0x1, def value: None
 bool  ___m_DisposedValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::XR::CoreUtils::UndoBlock, ___m_UndoGroup) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::CoreUtils::UndoBlock, ___m_DisposedValue) == 0x14, "Offset mismatch!");

static_assert(sizeof(::Unity::XR::CoreUtils::UndoBlock) == 0x18, "Size mismatch!");

} // namespace end def Unity::XR::CoreUtils
