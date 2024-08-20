.PHONY: clean All

All:
	@echo "----------Building project:[ codelite1project - Debug ]----------"
	@cd "codelite1project" && "$(MAKE)" -f  "codelite1project.mk"
clean:
	@echo "----------Cleaning project:[ codelite1project - Debug ]----------"
	@cd "codelite1project" && "$(MAKE)" -f  "codelite1project.mk" clean
