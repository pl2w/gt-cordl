#pragma once
// IWYU pragma private; include "System/Threading/Timer_TimerComparer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Timer_TimerComparer)
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
}
namespace System::Collections {
class IComparer;
}
namespace System::Threading {
class Timer;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct Timer_TimerComparer;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Timer_TimerComparer);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Timer_TimerComparer, "System.Threading", "Timer/TimerComparer");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Threading.Timer/TimerComparer
#pragma pack(push, 0)
struct CORDL_TYPE Timer_TimerComparer {
public:
// Declarations
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::System::Threading::Timer*>"
constexpr operator  ::System::Collections::Generic::IComparer_1<::System::Threading::Timer*>*() ;

/// @brief Convert operator to "::System::Collections::IComparer"
constexpr operator  ::System::Collections::IComparer*() ;

/// @brief Method Compare, addr 0xa355718, size 0x70, virtual true, abstract: false, final true
inline int32_t Compare(::System::Threading::Timer*  tx, ::System::Threading::Timer*  ty) ;

/// @brief Method System.Collections.IComparer.Compare, addr 0xa355680, size 0x98, virtual true, abstract: false, final true
inline int32_t System_Collections_IComparer_Compare(::System::Object*  x, ::System::Object*  y) ;

/// @brief Convert to "::System::Collections::Generic::IComparer_1<::System::Threading::Timer*>"
constexpr ::System::Collections::Generic::IComparer_1<::System::Threading::Timer*>* i___System__Collections__Generic__IComparer_1___System__Threading__Timer__() ;

/// @brief Convert to "::System::Collections::IComparer"
constexpr ::System::Collections::IComparer* i___System__Collections__IComparer() ;

// Ctor Parameters []
// @brief default ctor
constexpr Timer_TimerComparer() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5878};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
 uint8_t  _cordl_size_padding[0x1];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Timer_TimerComparer) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace
