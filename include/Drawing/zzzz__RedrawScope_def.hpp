#pragma once
// IWYU pragma private; include "Drawing/RedrawScope.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RedrawScope)
namespace Drawing {
class DrawingData;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Drawing {
struct RedrawScope;
}
// Write type traits
MARK_VAL_T(::Drawing::RedrawScope);
DEFINE_IL2CPP_CLASS(::Drawing::RedrawScope, "Drawing", "RedrawScope");
// Dependencies System.Runtime.InteropServices.GCHandle
namespace Drawing {
// Is value type: true
// CS Name: Drawing.RedrawScope
struct CORDL_TYPE RedrawScope {
public:
// Declarations
/// @brief Field idCounter, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_idCounter, put=setStaticF_idCounter)) int32_t  idCounter;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x55cb568, size 0xa0, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Draw, addr 0x55cb41c, size 0xb4, virtual false, abstract: false, final false
inline void Draw() ;

/// @brief Method DrawUntilDispose, addr 0x55cb6b0, size 0xec, virtual false, abstract: false, final false
inline void DrawUntilDispose() ;

/// @brief Method Rewind, addr 0x55cb4e4, size 0x84, virtual false, abstract: false, final false
inline void Rewind() ;

/// @brief Method .ctor, addr 0x55cb3a0, size 0x7c, virtual false, abstract: false, final false
inline void _ctor(::Drawing::DrawingData*  gizmos) ;

/// @brief Method .ctor, addr 0x55cb384, size 0x1c, virtual false, abstract: false, final false
inline void _ctor(::Drawing::DrawingData*  gizmos, int32_t  id) ;

static inline int32_t getStaticF_idCounter() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

static inline void setStaticF_idCounter(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr RedrawScope() ;

// Ctor Parameters [CppParam { name: "gizmos", ty: "::System::Runtime::InteropServices::GCHandle", modifiers: "", def_value: None, comment: None }, CppParam { name: "id", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RedrawScope(::System::Runtime::InteropServices::GCHandle  gizmos, int32_t  id) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27726};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field gizmos, offset: 0x0, size: 0x8, def value: None
 ::System::Runtime::InteropServices::GCHandle  gizmos;

/// @brief Field id, offset: 0x8, size: 0x4, def value: None
 int32_t  id;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Drawing::RedrawScope, gizmos) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Drawing::RedrawScope, id) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Drawing::RedrawScope) == 0x10, "Size mismatch!");

} // namespace end def Drawing
