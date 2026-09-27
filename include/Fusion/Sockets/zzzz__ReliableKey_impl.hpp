#pragma once
// IWYU pragma private; include "Fusion/Sockets/ReliableKey.hpp"
#include "Fusion/Sockets/zzzz__ReliableKey__Data_e__FixedBuffer_impl.hpp"
#include "Fusion/Sockets/zzzz__ReliableKey_def.hpp"
#include "Fusion/Sockets/zzzz__ReliableKey__Data_e__FixedBuffer_def.hpp"
constexpr ::GlobalNamespace::ReliableKey__Data_e__FixedBuffer& Fusion::Sockets::ReliableKey::__cordl_internal_get_Data()  {
return this->___Data;
}
constexpr ::GlobalNamespace::ReliableKey__Data_e__FixedBuffer const& Fusion::Sockets::ReliableKey::__cordl_internal_get_Data() const {
return this->___Data;
}
constexpr void Fusion::Sockets::ReliableKey::__cordl_internal_set_Data(::GlobalNamespace::ReliableKey__Data_e__FixedBuffer  value)  {
this->___Data = value;
}
// Ctor Parameters [CppParam { name: "Data", ty: "::GlobalNamespace::ReliableKey__Data_e__FixedBuffer", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::Sockets::ReliableKey::ReliableKey(::GlobalNamespace::ReliableKey__Data_e__FixedBuffer  Data) noexcept  {
this->Data = Data;
}
// Ctor Parameters []
constexpr ::Fusion::Sockets::ReliableKey::ReliableKey()   {
}
