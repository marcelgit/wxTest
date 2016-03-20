.PHONY: clean All

All:
	@echo "----------Building project:[ wxFuncionesMath - Debug ]----------"
	@cd "wxFuncionesMath" && "$(MAKE)" -f  "wxFuncionesMath.mk"
clean:
	@echo "----------Cleaning project:[ wxFuncionesMath - Debug ]----------"
	@cd "wxFuncionesMath" && "$(MAKE)" -f  "wxFuncionesMath.mk" clean
