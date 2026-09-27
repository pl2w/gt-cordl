#pragma once
// IWYU pragma private; include "Modio/API/Interfaces/IModioAPIInterface.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IModioAPIInterface)
namespace Modio::API {
class ModioAPIRequest;
}
namespace Modio {
class Error;
}
namespace Newtonsoft::Json::Linq {
class JToken;
}
namespace System::IO {
class Stream;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class IDisposable;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
// Forward declare root types
namespace Modio::API::Interfaces {
class IModioAPIInterface;
}
// Write type traits
MARK_REF_T(::Modio::API::Interfaces::IModioAPIInterface*);
DEFINE_IL2CPP_CLASS(::Modio::API::Interfaces::IModioAPIInterface*, "Modio.API.Interfaces", "IModioAPIInterface");
// Dependencies 
namespace Modio::API::Interfaces {
// Is value type: false
// CS Name: Modio.API.Interfaces.IModioAPIInterface
class CORDL_TYPE IModioAPIInterface {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method AddDefaultParameter, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void AddDefaultParameter(::StringW  value) ;

/// @brief Method AddDefaultPathParameter, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void AddDefaultPathParameter(::StringW  key, ::StringW  value) ;

/// @brief Method DownloadFile, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::IO::Stream*>>* DownloadFile(::StringW  url, ::System::Threading::CancellationToken  token) ;

/// @brief Method GetJson, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* GetJson(::Modio::API::ModioAPIRequest*  request) ;

/// @brief Method GetJson, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<T>>>* GetJson(::Modio::API::ModioAPIRequest*  request) ;

/// @brief Method RemoveDefaultHeader, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void RemoveDefaultHeader(::StringW  name) ;

/// @brief Method RemoveDefaultParameter, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void RemoveDefaultParameter(::StringW  value) ;

/// @brief Method RemoveDefaultPathParameter, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void RemoveDefaultPathParameter(::StringW  key) ;

/// @brief Method ResetConfiguration, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void ResetConfiguration() ;

/// @brief Method SetBasePath, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetBasePath(::StringW  value) ;

/// @brief Method SetDefaultHeader, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetDefaultHeader(::StringW  name, ::StringW  value) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IModioAPIInterface", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IModioAPIInterface(IModioAPIInterface const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18043};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Modio::API::Interfaces
