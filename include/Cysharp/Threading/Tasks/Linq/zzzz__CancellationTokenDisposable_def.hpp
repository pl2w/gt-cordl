#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/CancellationTokenDisposable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CancellationTokenDisposable)
namespace System::Threading {
class CancellationTokenSource;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Linq {
class CancellationTokenDisposable;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Linq::CancellationTokenDisposable*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Linq::CancellationTokenDisposable*, "Cysharp.Threading.Tasks.Linq", "CancellationTokenDisposable");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::Linq {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.CancellationTokenDisposable
class CORDL_TYPE CancellationTokenDisposable : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Token)) ::System::Threading::CancellationToken  Token;

/// @brief Field cts, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_cts, put=__cordl_internal_set_cts)) ::System::Threading::CancellationTokenSource*  cts;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0xae1f7f8, size 0x3c, virtual true, abstract: false, final true
inline void Dispose() ;

static inline ::Cysharp::Threading::Tasks::Linq::CancellationTokenDisposable* New_ctor() ;

constexpr ::System::Threading::CancellationTokenSource* const& __cordl_internal_get_cts() const;

constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get_cts() ;

constexpr void __cordl_internal_set_cts(::System::Threading::CancellationTokenSource*  value) ;

/// @brief Method .ctor, addr 0xae1f834, size 0x6c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Token, addr 0xae1f7e0, size 0x18, virtual false, abstract: false, final false
inline ::System::Threading::CancellationToken get_Token() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CancellationTokenDisposable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CancellationTokenDisposable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CancellationTokenDisposable(CancellationTokenDisposable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CancellationTokenDisposable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CancellationTokenDisposable(CancellationTokenDisposable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20772};

/// @brief Field cts, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::CancellationTokenSource*  ___cts;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::Linq::CancellationTokenDisposable, ___cts) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::Linq::CancellationTokenDisposable) == 0x18, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Linq
