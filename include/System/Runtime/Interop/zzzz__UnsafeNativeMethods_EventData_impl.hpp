#pragma once
// IWYU pragma private; include "System/Runtime/Interop/UnsafeNativeMethods_EventData.hpp"
#include "System/Runtime/Interop/zzzz__UnsafeNativeMethods_EventData_def.hpp"
constexpr uint64_t& GlobalNamespace::UnsafeNativeMethods_EventData::__cordl_internal_get_DataPointer()  {
return this->___DataPointer;
}
constexpr uint64_t const& GlobalNamespace::UnsafeNativeMethods_EventData::__cordl_internal_get_DataPointer() const {
return this->___DataPointer;
}
constexpr void GlobalNamespace::UnsafeNativeMethods_EventData::__cordl_internal_set_DataPointer(uint64_t  value)  {
this->___DataPointer = value;
}
constexpr uint32_t& GlobalNamespace::UnsafeNativeMethods_EventData::__cordl_internal_get_Size()  {
return this->___Size;
}
constexpr uint32_t const& GlobalNamespace::UnsafeNativeMethods_EventData::__cordl_internal_get_Size() const {
return this->___Size;
}
constexpr void GlobalNamespace::UnsafeNativeMethods_EventData::__cordl_internal_set_Size(uint32_t  value)  {
this->___Size = value;
}
constexpr int32_t& GlobalNamespace::UnsafeNativeMethods_EventData::__cordl_internal_get_Reserved()  {
return this->___Reserved;
}
constexpr int32_t const& GlobalNamespace::UnsafeNativeMethods_EventData::__cordl_internal_get_Reserved() const {
return this->___Reserved;
}
constexpr void GlobalNamespace::UnsafeNativeMethods_EventData::__cordl_internal_set_Reserved(int32_t  value)  {
this->___Reserved = value;
}
// Ctor Parameters [CppParam { name: "DataPointer", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Size", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Reserved", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::UnsafeNativeMethods_EventData::UnsafeNativeMethods_EventData(uint64_t  DataPointer, uint32_t  Size, int32_t  Reserved) noexcept  {
this->DataPointer = DataPointer;
this->Size = Size;
this->Reserved = Reserved;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UnsafeNativeMethods_EventData::UnsafeNativeMethods_EventData()   {
}
